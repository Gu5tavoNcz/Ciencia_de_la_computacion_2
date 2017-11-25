//
//  main.cpp
//  List_Enlazadas_Mac
//
//  Created by Gustavo Ñaupa Canaza on 21/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//
#include "Nodo.h"
#include "Lista.h"
#include "Nodo_d.h"
#include "ListaDoble.h"
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
    list.eliminar(1);
    list.mostrar();
    
    
    ListaDoble listD;
    listD.agregar(5);
    listD.agregar(7);
    listD.agregar(2);
    listD.agregar(1);
    listD.agregar(8);
    listD.agregar(9);
    listD.agregar(3);
    listD.agregar(6);
    listD.agregar(4);
    listD.agregar(0);
    listD.mostrar();
    listD.buscar(7);
    listD.eliminar(4);
    listD.mostrar();
}
