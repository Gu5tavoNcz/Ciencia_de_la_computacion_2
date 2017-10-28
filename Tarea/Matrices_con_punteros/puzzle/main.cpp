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
#include <stdio.h>
#include <conio.h>


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
        if (fila==0 and columna==0)
            movimientos=0;
        movimientos--;
    }

}

void ordenar_matriz(int (*p)[4],int tam)
{
    int (*f)[4]=p;
    int *ec=*p;
    int *c=ec;
    char cTecla;
    while(cTecla!=27)
    {
        cTecla=getch();
        switch(cTecla)
        {
        case 72:
            if(f<p+tam-1)
            {
                f++;
                c=*f;
                cambio(c,c-tam);
                imprimir_matriz(p,4);

            }
            cout<<"Arriba"<<endl;
            break;
        case 80:
            if(f>p)
            {
                f--;
                c=*f;
                cambio(c,c+tam);
                imprimir_matriz(p,4);
            }
            cout<<"Abajo"<<endl;
            break;
        case 75:
            if(c<ec+tam)
            {
                c++;
                ec=*f;
                cambio(c,ec);
                imprimir_matriz(p,4);
            }
            cout<<"Izquierda"<<endl;
            break;
        case 77:
            cout<<"Derecha"<<endl;
            break;

        }
    }

    if(f<p+tam)
    {

    }
}

int main()
{
    int ejercicio=0;
    cout<<"Cual ejercicio desea ejecutar: ";
    cin>>ejercicio;
    char cTecla;
    int matriz[4][4];
    matriz_ordenada(matriz,4);
    desordenar(matriz,200);
    imprimir_matriz(matriz,4);
    switch(ejercicio)
    {
    case 1:
        ordenar_matriz(matriz,4);
    }



    int hola=rand()%4;
    return 0;

}

