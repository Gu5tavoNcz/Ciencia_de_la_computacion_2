//
//  Nodo_d.h
//  List_Enlazadas_Mac
//
//  Created by Gustavo Ñaupa Canaza on 23/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#ifndef Nodo_d_h
#define Nodo_d_h
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
