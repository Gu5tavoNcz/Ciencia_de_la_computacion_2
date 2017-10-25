#include <iostream>
#include <stdlib.h>

using namespace std;

void cambio(int *s,int *t)
{
    int temp=*s;
    *s=*t;
    *t=temp;
}

void matriz_ordenada(int (*p)[4],int tam)
{
    int cont=1;
    int *A;
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            *(*(p+i)+j)=cont;
            cont++;
        }
    }
    *(*(p+3)+3)=0;
}

void imprimir_matriz(int (*p)[4],int tam)
{
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            cout<<"\t"<<*(*(p+i)+j);
        }
        cout<<endl;
    }
}

void desordenar(int (*p)[4],int tam)
{
    int direccion=rand()%4;
}


int main()
{
    int matriz[4][4];
    matriz_ordenada(matriz,4);
    imprimir_matriz(matriz,4);

    //cout << "Hello world!" << endl;
    return 0;

}
