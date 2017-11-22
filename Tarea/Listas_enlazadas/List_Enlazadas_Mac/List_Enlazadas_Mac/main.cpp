//
//  main.cpp
//  List_Enlazadas_Mac
//
//  Created by Gustavo Ñaupa Canaza on 21/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//
#include "Nodo.h"
#include "Lista.h"
#include <iostream>

using namespace std;

int main()
{
    ListaSimple list;
    list.agregar(7);
    list.agregar(3);
    list.agregar(5);
    list.agregar(6);
    list.agregar(9);
    list.agregar(1); 
    list.mostrar();
    list.buscar(5);
    list.eliminar(6);
    list.mostrar();
}
