//
//  Nodo.h
//  List_Enlazadas_Mac
//
//  Created by Gustavo Ñaupa Canaza on 21/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#ifndef Nodo_h
#define Nodo_h
#include <iostream>

using namespace std;


class Nodo
{
public:
    int valor;
    Nodo *siguiente;
    Nodo();
    Nodo(int);
    void mostrar();
};



class OrdenarDobleLista
{
private:
    Nodo *cabeza;
    int numNodos=0;
public:
    OrdenarDobleLista(Nodo *&t,Nodo *&s);
    void mostrar();
};



#endif /* Nodo_h */


Nodo::Nodo()
{
    valor=NULL;
    siguiente=NULL;
}

Nodo::Nodo(int miValor)
{
    valor=miValor;
    siguiente=NULL;
}

void Nodo::mostrar()
{
    cout<<valor<<"->";
}


OrdenarDobleLista::OrdenarDobleLista(Nodo *&t,Nodo *&s)
{
    cout<<"hjjhh";
    cout<<t->valor;
    Nodo *temp;
    if (t->valor < s->valor)
    {
        cabeza = t;
        temp = s;
    }
    else
    {
        cabeza = s;
        temp = t;
    }
    Nodo *nuevoNodo = cabeza;
    while(nuevoNodo->siguiente != NULL)
    {
        if(nuevoNodo->siguiente->valor < temp->valor)
        {
            nuevoNodo = nuevoNodo -> siguiente;
        }
        else{
            nuevoNodo -> siguiente = temp;
            temp -> siguiente = nuevoNodo -> siguiente;
            temp = temp -> siguiente;
        }
    }
    temp -> siguiente = temp;
    numNodos++;
}


void OrdenarDobleLista::mostrar()
{
    Nodo *nuevoNodo = cabeza;
    while(nuevoNodo != NULL)
    {
        nuevoNodo->mostrar();
        if(nuevoNodo->siguiente == NULL)
        {
            cout << "NULL";
        }
        nuevoNodo = nuevoNodo -> siguiente;
    }
    cout << "\nNumero de nodos: " << numNodos << " \n" << endl;
    cout << "----------------------------------------------------------" << endl;
}
