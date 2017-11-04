#include <string.h>
#include <iostream>
#include <stdlib.h>
#include<time.h>
#include <stdio.h>
#include <conio.h>


using namespace std;

void comparar(char *s,char *t)
{

    while(*s!='\0' || *t!='\0')
    {
        if(*s>*t)
        {
            cout<<"La primera cadena es mayor"<<endl;
        }
        else if(*s<*t)
            cout<<"La segunda cadena es mayor"<<endl;
        s++;
        t++;
    }
}

int main()
{
    char arr_1[100];
    char arr_2[100];
    cout<<"Introduzca la primeras palabra: ";
    gets(arr_1);
    cout<<"Introduzca la segunda palabra: ";
    gets(arr_2);
    comparar(arr_1,arr_2);
    cout<<arr_1<<","<<arr_2<<endl;
}
