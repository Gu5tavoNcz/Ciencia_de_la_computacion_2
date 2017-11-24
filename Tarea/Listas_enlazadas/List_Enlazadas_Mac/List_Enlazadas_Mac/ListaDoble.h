//
//  ListaDoble.h
//  List_Enlazadas_Mac
//
//  Created by Gustavo Ñaupa Canaza on 23/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#include "Nodo_d.h"
#ifndef ListaDoble_h
#define ListaDoble_h


class ListaDoble
{
private:
    NodoDoble *cabeza;
    int numNodos
public:
    ListaDoble();
    void agregar(int);
};


#endif /* ListaDoble_h */



ListaDoble::ListaDoble()
{
    cabeza = NULL;
    numNodos = 0;
}

void ListaDoble::agregar(int miValor)
{
    
}
