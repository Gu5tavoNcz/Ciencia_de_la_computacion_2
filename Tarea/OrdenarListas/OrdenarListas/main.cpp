//
//  main.cpp
//  OrdenarListas
//
//  Created by Gustavo Ñaupa Canaza on 25/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#include <iostream>
#include "Lista.h"
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
    
    
    ListaSimple list2;
    list.agregar(3);
    list.agregar(8);
    list.agregar(56);
    list.agregar(6);
    list.agregar(76);
    list.agregar(1);
    
    OrdenarDobleLista liston(list.getCabeza(),list2.getCabeza());
    liston.mostrar();
}
