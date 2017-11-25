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
#include "ListCircular.h"
#include "ListaDoble.h"
#include <iostream>

using namespace std;

int main()
{
    ListaSimple list;
    list.agregar(2);
    list.agregar(3);
    list.agregar(5);
    list.agregar(1);
    list.agregar(4);
    list.agregar(7);
    list.mostrar();
    list.buscar(5);
    list.eliminar(7);
    list.mostrar();
    
    
    ListaSimple list2;
    list.agregar(3);
    list.agregar(8);
    list.agregar(56);
    list.agregar(6);
    list.agregar(76);
    list.agregar(1);
    
    
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
    
    ListaCircular listC;
    listC.agregar(3);
    listC.agregar(1);
    listC.agregar(8);
    listC.agregar(5);
    listC.mostrar();
    listC.eliminar(8);

    listC.mostrar();
    
   // OrdenarDobleLista listota(list.getCabeza(),list2.getCabeza());
    //listota.mostrar();
}
