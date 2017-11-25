//
//  ListaCircular.h
//  ListasEnlazadasFinal
//
//  Created by Gustavo Ñaupa Canaza on 25/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#ifndef ListaCircular_h
#define ListaCircular_h
#include <iostream>

using namespace std;

class Nodo_C
{
private:
    int valor;
    Nodo_C *siguiente;
public:
    Nodo_C();
    Nodo_C(int);
    void mostrar();
    friend class ListaCircular;
};


class ListaCircular
{
private:
    Nodo_C *cabeza;
    int valor;
    int numNodos;
public:
    ListaCircular();
    void agregar(int);
    void eliminar(int);
    void mostrar();
};


Nodo_C::Nodo_C()
{
    valor=NULL;
    siguiente=NULL;
}

Nodo_C::Nodo_C(int miValor)
{
    valor=miValor;
    siguiente=NULL;
}

void Nodo_C::mostrar()
{
    cout<<valor<<"->";
}


ListaCircular::ListaCircular()
{
    cabeza = NULL;
    valor = NULL;
    numNodos = 0;
}

void ListaCircular::agregar(int miValor)
{
    Nodo_C *nuevoNodo = new Nodo_C(miValor);
    Nodo_C *ultimo  = cabeza;
    Nodo_C *temp = cabeza;
    
    if(cabeza == NULL)
    {
        cabeza = nuevoNodo;
        cabeza -> siguiente = cabeza;
    }
    
    else
    {
        while(ultimo->siguiente != cabeza)
            ultimo = ultimo -> siguiente;
        if(cabeza->valor > miValor)
        {
            nuevoNodo->siguiente = cabeza;
            cabeza = nuevoNodo;
            ultimo -> siguiente = cabeza;
        }
        else
        {
            while(temp->siguiente != cabeza && temp->siguiente->valor < miValor)
            {
                temp=temp->siguiente;
            }
            nuevoNodo -> siguiente = temp -> siguiente;
            temp->siguiente = nuevoNodo;
        }
    }
    numNodos++;
}

void ListaCircular::eliminar(int miValor)
{
    Nodo_C *temp = cabeza;
    Nodo_C *temp2 = cabeza->siguiente;
    int cont = 0;
    if (cabeza->valor == miValor)
    {
        cabeza = temp->siguiente;
        for(int i=0; i<numNodos-1;i++)
            temp = temp -> siguiente;
        temp -> siguiente = cabeza;
        cont++;
        numNodos--;
        delete temp;
    }
    else
    {
        while(temp2 != cabeza)
        {
            if(temp2->valor == miValor)
            {
                Nodo_C *auxiliar = temp2;
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

void ListaCircular::mostrar()
{
    Nodo_C *nuevoNodo = cabeza;
    while(nuevoNodo -> siguiente != cabeza)
    {
        nuevoNodo->mostrar();
        if(nuevoNodo->siguiente == NULL)
        {
            cout << "NULL";
        }
        nuevoNodo = nuevoNodo -> siguiente;
    }
    nuevoNodo->mostrar();
    cout << "\nNumero de nodos: " << numNodos << " \n" << endl;
    cout << "----------------------------------------------------------" << endl;
}


#endif /* ListaCircular_h */
