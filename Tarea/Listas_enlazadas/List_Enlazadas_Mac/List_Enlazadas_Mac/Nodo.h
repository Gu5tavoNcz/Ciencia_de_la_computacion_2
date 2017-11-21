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
