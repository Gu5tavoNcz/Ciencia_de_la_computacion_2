//
//  main.cpp
//  Tarea_1_CC2
//
//  Created by Gustavo Ñaupa Canaza on 30/08/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#include <iostream>
using namespace std;

void bisiesto(int n,int m[])
{
    if((n%4==0 && n%100!=0) || n%400==0)
        m[1]=29;
    else
        m[1]=28;
}

void corregir_signo(int &a,int &b,int &c)
{
    int temp;
    if(a<0)
    {
        temp=a;
        a=temp*(-1);
    }
    if(b<0)
    {
        temp=b;
        b=temp*(-1);
    }
    if(c<0)
    {
        temp=c;
        c=temp*(-1);
    }
}

int dias_t(int d, int m,int a,int list[])
{
    int dias=0;
    for(int i=1;i<a;i++)
    {
        bisiesto(i,list);
        for(int j=0;j<12;j++)
            dias=dias+list[j];
    }
    bisiesto(a,list);
    for (int k=0;k<m;k++)
        dias=dias+list[k];
    dias+=d;
    return dias;
}

void ejercicio_1()
{
    int d1,m1,a1,d2,m2,a2,horas,minutos,semanas,dias=1.0;
    int meses[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    double segundos;
    cout<<"Introduce una fecha: ";
    cin>>d1>>m1>>a1;
    cout<<"Introduce otra fecha: ";
    cin>>d2>>m2>>a2;
    corregir_signo(d1,m1,a1);
    corregir_signo(d2,m2,a2);
    dias+=dias_t(d2,m2,a2,meses)-dias_t(d1,m1,a1,meses);
    horas=dias*24;
    minutos=horas*60;
    segundos=minutos*60;
    semanas=dias/7;
    cout<<"\t\t\t\tREDONDEANDO:\tREDONDEANDO UP\tREDONDENADO DOW"<<endl;
    cout<<"Num Dias:\t"<<dias<<"\t\t"<<dias<<"\t\t"<<dias<<"\t\t"<<dias<<endl;
    //cout<<"Num Semanas:"<<semanas<"\t"<<int(semanas)<<"\t\t"<<int(semanas+0.4)<<"\t\t"<<int(semanas-0.4)<<endl;
    cout<<"Num Meses:\t"<<float(dias/30.5)<<"\t\t"<<int(dias/30)<<endl;
    cout<<"Num Anios:\t"<<a2-a1<<"\t\t"<<int(a2-a1)<<endl;
    cout<<"Num Segundos:\t"<<segundos<<"\t\t"<<int(segundos)<<endl;
    cout<<"Num Minutos:\t"<<minutos<<"\t\t"<<int(minutos)<<endl;
    cout<<"Num Horas:\t"<<horas<<"\t\t"<<int(horas)<<endl;
    cout<<"\nEn construccion 1 ..."<<dias<<endl;
}

void ejercicio_2()
{
    int n, divisores, numero, nuevo_numero;
    nuevo_numero = 0;
    numero = 1;
    cout<<"Ingrese un numero: ";
    cin>>n;
    while (nuevo_numero<n)
    {
        divisores=0;
        for(int i=2;i<numero;i++)
            if ((numero%i)==0)
                divisores++;
        nuevo_numero=numero;
        if (divisores==0)
            cout<<numero<<" ";
        numero++;
    }
    cout<<"En construccion 2 ..."<<endl;
}

void ejercicio_3()
{
    cout<<"En construccion 3 ..."<<endl;
}

void ejercicio_4()
{
    cout<<"En construccion 4 ..."<<endl;
}


int main()
{
    int ejercicio;
    cout<<"1.- Diferencia de fechas.\n2.- Numeros primos menosres a mil.\n3.- Calculadora modular: \n\tSuma\n\tResta\n\tMultiplicacion\n\tInverso\n4.- Encriptar - Desencriptar.\n\nIngrese el numero del ejercicio a ejecutar: ";
    cin>>ejercicio;
    switch(ejercicio)
    {
        case 1:
            ejercicio_1();
            break;
        case 2:
            ejercicio_2();
            break;
        case 3:
            ejercicio_3();
            break;
        case 4:
            ejercicio_4();
            break;
        default:
            cout<<"Ejercicio incorrecto\n"<<endl;
    }
}
