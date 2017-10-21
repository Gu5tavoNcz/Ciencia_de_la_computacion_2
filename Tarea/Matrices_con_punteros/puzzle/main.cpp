#include <iostream>

using namespace std;

void matriz_ordenada(int (*p)[4],int tam)
{
    int cont=1;
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            *(*(p+i)+j)=cont;
            cont++;
        }
    }
}

void imprimir_matriz(int (*p)[4],int tam)
{
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            cout<<" "<<*(*(p+i)+j);
        }
        cout<<endl;
    }
}

int main()
{
    int matriz[4][4];
    matriz_ordenada(matriz,4);
    imprimir_matriz(matriz,4);
    cout << "Hello world!" << endl;
    return 0;
}
