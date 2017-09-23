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
    while(cont<tamanio)
    {
        for(int i=1;i<tamanio-cont;i++)
        {
            if(lista[i]<lista[i-1])
            {
                cambio(&lista[i],&lista[i-1]);
            }
        }
        cont++;
    }
}

void selectionSort(int lista[],int tamano)
{
    for(int i=0;i<tamano-1;i++)
    {
        int minimo=i;
        for(int j=i+1;j<tamano;j++)
        {
            if(lista[j]<lista[minimo])
                minimo=j;
        }
        if(minimo!=i)
            cambio(&lista[i],&lista[minimo]);
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



void imprimirLista(int lista[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<lista[i]<<",";
    }
}



int main()
{
    int miLista[]={5,1,3,2,5,4,7,9,6,8,0,23,15,34,25,98,56,43,18,21,45,64,35};
    int sizeList=sizeof(miLista)/sizeof(miLista[0]);
    imprimirLista(miLista,sizeList);
    cout<<endl;
    burbuja(miLista,sizeList);
    //selectionSort(miLista,sizeList);
    //insertionSort(miLista,sizeList);
    cout<<endl;
    imprimirLista(miLista,sizeList);
    return 0;
}
