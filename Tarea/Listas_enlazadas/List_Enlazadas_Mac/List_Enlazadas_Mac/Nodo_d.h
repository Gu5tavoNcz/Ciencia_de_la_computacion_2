//
//  Nodo_d.h
//  List_Enlazadas_Mac
//
//  Created by Gustavo Ñaupa Canaza on 23/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//
#include <iostream>
#ifndef Nodo_d_h
#define Nodo_d_h

using namespace std;

class NodoDoble
{
public:
    int valor;
    NodoDoble *siguiente;
    NodoDoble *anterior;
    NodoDoble();
    NodoDoble(int);
    void mostrar();
};

#endif /* Nodo_d_h */

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
