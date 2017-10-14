#include "stdio.h"
#include "conio.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;



void llenar_matriz(int **p,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            p[i][j]=rand()%5;
        }
    }
}


void imprimir_matriz(int **p,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<",";
        }
    }
}
int main()
{
    char cTecla;
    int tamanio;
    cout<<"Numero cuadrado de la matriz: ";
    cin>>tamanio;
    int matriz[tamanio][tamanio];
    llenar_matriz(matriz[][5],5);
    imprimir_matriz(matriz[][5],5);
    printf("\r\nPresione un Tecla ...");
/*
    while(cTecla != 27)
    {
       cTecla = getch();
       if(cTecla == 0)
           cTecla = getch();
       else
           switch(cTecla)
           {
            case 13:
                 printf("\r\n Presiono ENTER");
            break;

            case 9:
                 printf("\r\n Presiono TAB");
            break;

            case 72:
                 printf("\r\n Presiono Flecha Arriba");
            break;

            case 80:
                 printf("\r\n Presiono Flecha Abajo");
            break;

            case 75:
                 printf("\r\n Presiono Flecha izquierda");
            break;

            case 77:
                 printf("\r\n Presiono Flecha derecha");
            break;
            }
    }
*/
    return 0;
}
