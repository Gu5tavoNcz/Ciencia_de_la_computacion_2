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

void revisa(int (*p)[4])
{
    int *c;
    c=*p;
    int gana=0;
    for(int i=0;i<15;i++)
    {
        if(*c==i+1)
        c++;
        gana++;
    }
    if(gana==15)
        cout<<"GANO EL JUEGO"<<endl;
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
    int tam=4;
    int (*f)[4]=p+tam-1;
    int *ec=*f;
    int *c=ec+tam-1;

    while(movimientos>0)
    {
        int direccion=rand()%4;
        switch (direccion)
        {
        case 1:
            if(f<p+tam-1)
            {
                f++;
                c+=tam;
                ec=*f;
                cambio(c,c-tam);
                movimientos-=1;

            }
            break;
        case 3:
            if(f>p)
            {
                f--;
                ec=*f;
                c-=tam;
                cambio(c,c+tam);
                movimientos-=1;
                imprimir_matriz(p);
            }
            break;
        case 0:
            if(c<ec+tam-1)
            {
                c++;
                cambio(c,c-1);
                movimientos-=1;
                imprimir_matriz(p);
            }
            break;
        case 2:
            if(c>ec)
            {
                c--;
                cambio(c,c+1);
                movimientos-=1;
                imprimir_matriz(p);
            }
            break;

        }
        if (**p==0)
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
        system("cls");
        switch(cTecla)
        {
        case 72:
            if(f<p+tam-1)
            {
                f++;
                c+=tam;
                ec=*f;
                cambio(c,c-tam);
                revisa(p);
            }
            //cout<<"Arriba"<<endl;
            break;
        case 80:
            if(f>p)
            {
                f--;
                ec=*f;
                c-=tam;
                cambio(c,c+tam);
                revisa(p);
            }
            break;
        case 75:
            if(c<ec+tam-1)
            {
                c++;
                cambio(c,c-1);
                revisa(p);
            }
            //cout<<"Izquierda"<<endl;
            break;
        case 77:
            if(c>ec)
            {
                c--;
                cambio(c,c+1);
                revisa(p);
            }
            //cout<<"Derecha"<<endl;
            break;

        }
        imprimir_matriz(p);
    }
}

int main()
{
    char cTecla;
    int matriz[4][4];
    matriz_ordenada(matriz);
    imprimir_matriz(matriz);
    desordenar(matriz,500);
    imprimir_matriz(matriz);
    ordenar_matriz(matriz,4);


    int hola=rand()%4;
    return 0;

}

