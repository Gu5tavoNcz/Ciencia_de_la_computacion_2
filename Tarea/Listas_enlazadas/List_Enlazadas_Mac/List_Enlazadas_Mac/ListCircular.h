//
//  ListCircular.h
//  List_Enlazadas_Mac
//
//  Created by Gustavo Ñaupa Canaza on 25/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#ifndef ListCircular_h
#define ListCircular_h


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

//-----------------------------


class ListaCircular
{
private:
    Nodo_C *cabeza;
    int valor;
    int numNodos;
public:
    ListaCircular();
    void agregar(int);
    void mostrar();
};

#endif /* ListCircular_h */


ListaCircular::ListaCircular()
{
    cabeza = NULL;
    valor = NULL;
    numNodos = 0;
}

void ListaCircular::agregar(int miValor)
{
    Nodo_C *nuevoNodo = new Nodo_C(miValor);
    if(cabeza == NULL)
    {
        cabeza = nuevoNodo;
        cabeza -> siguiente = cabeza;
    }
    else
    {
        if(cabeza->valor > miValor)
        {
            
        }
    }
}

void ListaCircular::mostrar()
{
    Nodo_C *nuevoNodo = cabeza;
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
