//
//  main.cpp
//  ListasEnlazadasFinal
//
//  Created by Gustavo Ñaupa Canaza on 25/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#include <iostream>
#include "ListaSimple.h"
#include "ListaDoble.h"
#include "ListDoble.h"
#include "ListaCircular.h"

using namespace std;

int main()
{
    int ejercicio;
    cout<<"Ingrese el nuero de ejercicio: ";
    cin>>ejercicio;
    switch (ejercicio) {
        case 1:
        {
            ListaSimple list;
            list.agregar(2);
            list.agregar(3);
            list.agregar(5);
            list.agregar(1);
            list.agregar(4);
            list.agregar(7);
            list.mostrar();
            //list.buscar(5);
            list.eliminar(5);
            list.eliminar(2);
            list.eliminar(3);
            list.eliminar(1);
            list.eliminar(4);
            list.eliminar(7);
            
            list.mostrar();
            break;
        }
            
        case 2:
        {
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
            listD.eliminar(9);
            listD.mostrar();
            
            break;
        }
            
        case 3:
        {
            doble_list <int >ll;
            ll.insertar_(4);
            ll.insertar_(6);
            ll.insertar_(9);
            ll.insertar_(8);
            ll.insertar_(1);
            ll.insertar_(3);
            ll.print();
            ll.borrar_(6);
            ll.print();
            
            break;
            
        }
            
        case 4:
        {
            ListaCircular listC;
            listC.agregar(3);
            listC.agregar(1);
            listC.agregar(8);
            listC.agregar(5);
            listC.mostrar();
            listC.eliminar(5);
            
            listC.mostrar();
            break;
        }
            
            
        default:
            break;
            
    }
 
    
     
}
