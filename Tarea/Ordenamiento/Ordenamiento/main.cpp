#include <iostream>

using namespace std;

void cambio(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

void burbuja(int lista[],int tamanio)
{
    int cont=0;
    bool ordenado=false;
    while(ordenado==false)
    {
        ordenado=true;
        for(int i=0;i<tamanio-cont;i++)
        {
            if(lista[i]<lista[i-1])
            {
                ordenado=false;
                cambio(&lista[i],&lista[i-1]);
            }
        }
        cont++;
    }
}

void cocktailSort(int lista[],int tamanio)
{
    int cont=0;
    bool ordenado=false;
    while(ordenado==false)
    {
        ordenado=true;
        for(int i=0;i<tamanio-cont;i++)
        {
            if(lista[i]<lista[i-1])
            {
                ordenado=false;
                cambio(&lista[i],&lista[i-1]);
            }
            if(lista[tamanio-(i+1)]<lista[tamanio-(i+2)])
            {
                ordenado=false;
                cambio(&lista[tamanio-(i+1)],&lista[tamanio-(i+2)]);
            }
        }
        cont++;
    }
}

void selectionSort(int lista[],int tamano)
{
    for(int i=0;i<tamano-1;i++)
    {
        int min=i;
        for(int j=i+1;j<tamano;j++)
        {
            if(lista[j]<lista[min])
                min=j;
        }
        if(min!=i)
            cambio(&lista[i],&lista[min]);
    }
}

void insertionSort(int lista[],int tamano)
{
    for(int i=1;i<tamano;i++)
    {
        int j=i;
        while(j>0 && lista[j]<lista[j-1])
        {
            cambio(&lista[j],&lista[j-1]);
            j--;
        }
    }
}

void  quick(int lista[],int izquierdo,int derecho)
{
    int izq=izquierdo;
    int der=derecho;
    int pivote=lista[(izq+der)/2];
    do
    {
        while(lista[izq]<pivote && izq<derecho)
            izq++;
        while(pivote<lista[der] && der>izquierdo)
            der--;
        if(izq<=der)
        {
            cambio(&lista[izq],&lista[der]);
            izq++;
            der--;
        }
    }while(izq<=der);
    if(izquierdo<der)
        quick(lista,izquierdo,der);
    if(derecho>izq)
        quick(lista,izq,derecho);
}

void quicksort(int lista[],int n)
{
    quick(lista,0,n-1);
}

void imprimirLista(int lista[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<lista[i]<<",";
    }
}



int main()
{
    int miLista[]={9,7,8,5,6,4,3,1,2,23,42,12,76,89,54,34,21};
    int sizeList=sizeof(miLista)/sizeof(miLista[0]);
    imprimirLista(miLista,sizeList);
    cout<<"\n"<<endl;
    //burbuja(miLista,sizeList);
    //selectionSort(miLista,sizeList);
    //insertionSort(miLista,sizeList);
    cocktailSort(miLista,sizeList);
    cout<<endl;
    imprimirLista(miLista,sizeList);
    return 0;
}
