//
//  main.cpp
//  Puzzle_mac
//
//  Created by Gustavo Ñaupa Canaza on 25/10/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include<time.h>

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

void desordenar(int (*p)[4],int movimientos)
{
    srand(time(NULL));
    int fila=3;
    int columna=3;
    while(movimientos>0)
    {
        int direccion=rand()%4;
        switch (direccion)
        {
            case 0:
                if((columna-1)>=0)
                    {
                    cambio(*(p+fila)+columna,*(p+fila)+columna-1);
                    columna--;
                }
                break;

            case 1:
                if((fila-1)>=0)
                {
                    cambio(*(p+fila)+columna,*(p+fila-1)+columna);
                    fila--;
                }
                break;

            case 2:
                if((columna+1)<4)
                {
                    cambio(*(p+fila)+columna,*(p+fila)+columna+1);
                    columna++;
                }
                break;

            case 3:
                if((fila+1)<4)
                {
                    cambio(*(p+fila)+columna,*(p+fila+1)+columna);
                    fila++;
                }
                break;

            default:
                break;
        }
        movimientos--;
        //cout<<"\n"<<direccion<<endl;
    }


}


int main()
{

    int matriz[4][4];
    matriz_ordenada(matriz,4);
    desordenar(matriz,100);
    imprimir_matriz(matriz,4);
    int hola=rand()%4;
    cout <<"\n"<<hola<< endl;
    return 0;

}

