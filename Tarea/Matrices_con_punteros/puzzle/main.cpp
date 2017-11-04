//
//  main.cpp
//  Puzzle_mac
//
//  Created by Gustavo Ñaupa Canaza on 25/10/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//
#include <string.h>
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

void matriz_ordenada(int (*p)[4])
{
    int *c;
    c=*p;
    for(int i=0;i<16;i++)
    {
        *c=i+1;
        c++;
    }
    c--;
    *c=0;
}

void imprimir_matriz(int (*p)[4])
{
    int *c;
    c=*p;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"\t"<<*c;
            c++;
        }
        cout<<"\n";
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

void ordenando_matriz(int (*p)[4],int tam)
{

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
                imprimir_matriz(p);

            }
            cout<<"Arriba"<<endl;
            break;
        case 80:
            if(f>p)
            {
                f--;
                c=*f;
                cambio(c,c+tam);
                 imprimir_matriz(p);
            }
            cout<<"Abajo"<<endl;
            break;
        case 75:
            //if(f)
            //{
                *f+1;
                c++;
                //c=*f;
                cambio(c,c-1);
                imprimir_matriz(p);
            //}
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


    switch(ejercicio)
    {
    case 1:
        char cTecla;
        int matriz[4][4];
        matriz_ordenada(matriz);
        imprimir_matriz(matriz);
        desordenar(matriz,200);
        imprimir_matriz(matriz);
        ordenar_matriz(matriz,4);
    case 2:
        char arr_1[100];
        char arr_2[100];
        cout<<"Introduzca la segunda palabra: ";
        gets(arr_1);
        //cout<<"Introduzca la segunda palabra: ";
        //gets(arr_2);
        //comparar(arr_1,arr_2);
        cout<<arr_1<<","<<arr_2<<endl;
    }


    int hola=rand()%4;
    return 0;

}

