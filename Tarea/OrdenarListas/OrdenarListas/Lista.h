//
//  Lista.h
//  OrdenarListas
//
//  Created by Gustavo Ñaupa Canaza on 25/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#ifndef Lista_h
#define Lista_h
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

class ListaSimple
{
private:
    Nodo *cabeza;
    int numNodos;
public:
    ListaSimple();
    void agregar(int);
    void buscar(int);
    void eliminar(int);
    void mostrar();
    Nodo *getCabeza();
};

class OrdenarDobleLista
{
private:
    Nodo *cabeza;
    int numNodos=0;
public:
    OrdenarDobleLista(Nodo *t,Nodo *s);
    void mostrar();
};




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

ListaSimple::ListaSimple()
{
    numNodos=0;
    cabeza=NULL;
}


void ListaSimple::agregar(int miValor)
{
    Nodo *nuevoNodo = new Nodo(miValor);
    Nodo *temp = cabeza;
    if(cabeza == 0)
        cabeza = nuevoNodo;
    else
    {
        if(cabeza->valor > miValor)
        {
            nuevoNodo->siguiente = cabeza;
            cabeza = nuevoNodo;
        }
        else
        {
            while(temp->siguiente != NULL && temp->siguiente->valor < miValor)
            {
                temp=temp->siguiente;
            }
            nuevoNodo->siguiente = temp->siguiente;
            temp->siguiente = nuevoNodo;
        }
    }
    numNodos++;
}

void ListaSimple::buscar(int miValor)
{
    Nodo *temp = cabeza;
    int cont=1;
    int cont2=0;
    while(temp)
    {
        if(temp->valor == miValor)
        {
            cout << "El numero "<<miValor<<" se encuentra en la posición: " << cont  << endl;
            cout << "----------------------------------------------------------" << endl;
            cont2++;
        }
        temp = temp->siguiente;
        cont++;
    }
    if (cont2 == 0)
        cout << "No existe el numero "<<miValor<<" en la lista" << "\n" <<endl;
    cout << "----------------------------------------------------------" << endl;
    
}

void ListaSimple::eliminar(int miValor)
{
    Nodo *temp = cabeza;
    Nodo *temp2 = cabeza->siguiente;
    int cont = 0;
    if (cabeza->valor == miValor)
    {
        cabeza = temp->siguiente;
        cont++;
        delete temp;
        numNodos--;
    }
    else
    {
        while(temp2)
        {
            if(temp2->valor == miValor)
            {
                Nodo *auxiliar = temp2;
                temp->siguiente = temp2->siguiente;
                delete auxiliar;
                cont++;
                numNodos--;
            }
            temp = temp->siguiente;
            temp2 = temp2->siguiente;
        }
    }
    if (cont == 0)
        cout << "No existe el dato\n"<< endl;
}

void ListaSimple::mostrar()
{
    Nodo *temp = cabeza;
    while(temp)
    {
        temp->mostrar();
        if (temp->siguiente == 0)
        {
            cout<<"NULL";
        }
        temp=temp->siguiente;
    }
    cout<<"\nNumero de nodos: "<<numNodos<<"\n"<<endl;
    cout << "----------------------------------------------------------" << endl;
}

Nodo *ListaSimple::getCabeza(){return cabeza;}

OrdenarDobleLista::OrdenarDobleLista(Nodo *t,Nodo *s)
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

#endif /* Lista_h */
