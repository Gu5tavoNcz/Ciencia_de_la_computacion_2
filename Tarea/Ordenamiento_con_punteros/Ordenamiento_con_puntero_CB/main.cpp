#include <iostream>

using namespace std;

void cambio(int *s,int *t)
{
    int temp=*s;
    *s=*t;
    *t=temp;
}

void burbuja(int *p,int tamanio)
{
    bool ordenado=false;
    int cont=0;
    while(ordenado==false)
    {
        ordenado=true;
        for(int i=1;i<(tamanio-cont);i++)
        {
            if(*(p+i)<*(p+i-1))
            {
                cambio((p+i),(p+i-1));
                ordenado=false;
            }
        }
        cont++;
    }
}

void cocktailSort(int *p,int tamanio)
{
    bool ordenado=false;
    int cont=0;
    while(ordenado==false)
    {
        ordenado=true;
        for(int i=1;i<(tamanio-cont);i++)
        {
            if(*(p+i)<*(p+i-1))
            {
                cambio(&*(p+i),&*(p+i-1));
                ordenado=false;
                cout<<"primer for: "<<*(p+i)<<endl;
            }
        }
        for(int j=(tamanio-cont-1);j>0;j--)
        {
            if(*(p+j)<*(p+j-1))
                cambio(&*(p+j),&*(p+j-1));
                ordenado=false;
                cout<<"segundo for: "<<*(p+j)<<endl;
        }
        cont++;
    }
}

void selectionSort(int *p,int tamanio)
{
    for(int i=0;i<tamanio-1;i++)
    {
        for(int j=i+1;j<tamanio;j++)
        {
            if(*(p+j)<*(p+i))
            {
                cambio(&*(p+j),&*(p+i));
            }
        }
    }
}

void insertionSort(int *p,int tamanio)
{
    for(int i=0;i<tamanio;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(*(p+j)<*(p+j-1))
                cambio(&*(p+j),&*(p+j-1));
        }
    }
}

void quick(int *p,int izquierdo,int derecho)
{
    int izq=izquierdo;
    int der=derecho;
    int pivote=(izq+der)/2;
    do
    {
        while(*(p+izq)<*(p+pivote) && izq<derecho)
            izq++;
        while(*(p+pivote)<*(p+der) && der>izquierdo)
            der--;
        if(izq<=der)
        {
            cambio(&*(p+izq),&*(p+der));
            izq++;
            der--;
        }
    }while(izq<=der);
    if(izquierdo<der)
            quick(&*p,izquierdo,der);
    if(derecho>izq)
        quick(&*p,izq,derecho);
}

void quickSort(int *p,int n)
{
    quick(&*p,0,n-1);
}

void imprimirLista(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<*p<<",";
        p++;
    }
}




int main()
{
    int MiLista[]={5,2,4,7,6,5,3,1,9,7,8,23,12,45,76,34,89,21,88,32,63};
    int sizeList=sizeof(MiLista)/sizeof(MiLista[0]);
    imprimirLista(MiLista,sizeList);
    burbuja(MiLista,sizeList);
    //cocktailSort(MiLista,sizeList);
    //selectionSort(MiLista,sizeList);
    //insertionSort(MiLista,sizeList);
    //quickSort(MiLista,sizeList);
    cout<<"\nTamanio de lista: "<<sizeList<<"\n"<<endl;
    imprimirLista(MiLista,sizeList);
    return 0;
}
