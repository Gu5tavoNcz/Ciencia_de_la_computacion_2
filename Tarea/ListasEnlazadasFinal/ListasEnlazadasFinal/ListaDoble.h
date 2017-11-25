//
//  ListaDoble.h
//  ListasEnlazadasFinal
//
//  Created by Gustavo Ñaupa Canaza on 25/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#ifndef ListaDoble_h
#define ListaDoble_h
#include <iostream>

using namespace std;

class NodoDoble
{
private:
    int valor;
    NodoDoble *siguiente;
    NodoDoble *anterior;
public:
    NodoDoble();
    NodoDoble(int);
    void mostrar();
    friend class ListaDoble;
};

//-----------------------

class ListaDoble
{
private:
    NodoDoble *cabeza;
    NodoDoble *cola;
    int numNodos;
public:
    ListaDoble();
    void agregar(int);
    void buscar(int);
    void eliminar(int);
    void mostrar();
};


#endif /* ListaDoble_h */


NodoDoble::NodoDoble()
{
    siguiente = NULL;
    anterior = NULL;
    valor = NULL;
}

NodoDoble::NodoDoble(int miValor)
{
    siguiente = NULL;
    anterior = NULL;
    valor = miValor;
}

void NodoDoble::mostrar()
{
    cout << valor << "->";
}

//-----------------------


ListaDoble::ListaDoble()
{
    cabeza = NULL;
    numNodos = 0;
}

void ListaDoble::agregar(int miValor)
{
    NodoDoble *nuevoNodo = new NodoDoble(miValor);
    NodoDoble *temp = cabeza;
    nuevoNodo->valor = miValor;
    if(cabeza == 0 && cola == 0)
    {
        cabeza = nuevoNodo;
        cola = nuevoNodo;
    }
    else
    {
        if(cabeza->valor > miValor)
        {
            nuevoNodo->siguiente = cabeza;
            cabeza->anterior = nuevoNodo;
            cabeza = nuevoNodo;
        }
        else
        {
            while(temp->siguiente != NULL && temp->siguiente->valor < miValor )
            {
                temp = temp -> siguiente;
            }
            nuevoNodo -> siguiente = temp -> siguiente;
            temp -> siguiente = nuevoNodo;
            nuevoNodo -> anterior = temp -> anterior;
            temp -> anterior = nuevoNodo;
        }
    }
    numNodos++;
}

void ListaDoble::buscar(int miValor)
{
    NodoDoble *nuevoNodo = cabeza;
    int cont = 1;
    int cont2 = 0;
    while( nuevoNodo != NULL)
    {
        if(nuevoNodo -> valor == miValor)
        {
            cout << "El numero "<<miValor<<" se encuentra en la posicion: " << cont <<endl;
            cout << "----------------------------------------------------------" << endl;
            cont2++;
        }
        nuevoNodo = nuevoNodo -> siguiente;
        cont++;
    }
    if (cont2 == 0)
    {
        cout << "El numero "<<miValor<<" no se encuentra en la lista" << endl;
        cout << "----------------------------------------------------------" << endl;
    }
}

void ListaDoble::eliminar(int miValor)
{
    NodoDoble *temp = cabeza;
    NodoDoble *temp2 = cabeza->siguiente;
    int cont = 0;
    if (cabeza->valor == miValor)
    {
        cabeza = temp->siguiente;
        cabeza -> anterior = NULL;
        cont++;
        numNodos--;
        delete temp;
    }
    else if(temp2 -> siguiente == NULL)
    {
        temp2 = temp2 ->anterior;
        temp2 -> siguiente = NULL;
        numNodos--;
    }
    else
    {
        while(temp2)
        {
            if(temp2->valor == miValor)
            {
                NodoDoble *auxiliar = temp2;
                temp->siguiente = temp2->siguiente;
                temp2 = temp2 -> siguiente;
                //temp2 -> anterior = temp;
                delete auxiliar;
                cont++;
                numNodos--;
            }
            else
            {
                temp= temp -> siguiente;
                temp2 = temp2 -> siguiente;
            }
        }
    }
    if (cont == 0)
        cout << "No existe el dato\n"<< endl;
    /*
     NodoDoble *temp = cabeza;
     NodoDoble *temp2 = cabeza->siguiente;
     int cont = 0;
     if (cabeza->valor == miValor)
     {
     cabeza = temp->siguiente;
     cont++;
     delete temp;
     }
     else
     {
     while (temp2->valor != miValor && temp2 != NULL)
     {
     temp2 = temp2 -> siguiente;
     }
     if(temp2 -> valor == miValor)
     {
     temp2 -> anterior -> siguiente  = temp2 -> siguiente;
     cola -> anterior = temp2 -> anterior;
     delete (temp2);
     }
     
     }
     numNodos--;
     */
}

void ListaDoble::mostrar()
{
    NodoDoble *nuevoNodo = cabeza;
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
