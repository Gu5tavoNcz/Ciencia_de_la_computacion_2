#include <iostream>

using namespace std;

void burbuja(int lista[],int tamanio)
{
    int temp,i=1;
    bool ordenado=false;
    while(i<tamanio || ordenado==false)
    {
        i+=1;
        ordenado=true;
        for(int j=0;j<tamanio-i;j++)
        {
            if(lista[j]>lista[j+1])
            {
                ordenado=false;
                temp=lista[j];
                lista[j]=lista[j+1];
                lista[j+1]=temp;
            }
        }
    }
    cout<<"\n"<<endl;
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
    int miLista[10]={5,2,12,4,6,8,3,3,5,78};
    int sizeList=sizeof(miLista)/sizeof(miLista[0]);
    imprimirLista(miLista,sizeList);
    burbuja(miLista,sizeList);
    imprimirLista(miLista,sizeList);
    return 0;
}
