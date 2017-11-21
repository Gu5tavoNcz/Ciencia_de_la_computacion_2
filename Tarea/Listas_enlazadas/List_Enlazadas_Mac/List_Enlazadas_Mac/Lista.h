//
//  Lista.h
//  List_Enlazadas_Mac
//
//  Created by Gustavo Ñaupa Canaza on 21/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#ifndef Lista_h
#define Lista_h

class ListaSimple
{
private:
    Nodo *cabeza;
    int numNodos;
public:
    ListaSimple();
    //ListaSimple(int);
    void agregar(int);
    void mostrar();
    
};

#endif /* Lista_h */


ListaSimple::ListaSimple()
{
    numNodos=0;
    cabeza=NULL;
}


void ListaSimple::agregar(int miValor)
{
    Nodo *nuevoNodo = new Nodo(miValor);
    Nodo *temp = cabeza;
    if(cabeza == 0)
        cabeza = nuevoNodo;
    else
    {
        if(cabeza->valor > miValor)
        {
            nuevoNodo->siguiente = cabeza;
            cabeza = nuevoNodo;
        }
        else
        {
            while(temp->siguiente != NULL && temp->siguiente->valor < miValor)
            {
                temp=temp->siguiente;
            }
            nuevoNodo->siguiente = temp->siguiente;
            temp->siguiente = nuevoNodo;
        }
    }
    numNodos++;
}

void ListaSimple::mostrar()
{
    Nodo *temp = cabeza;
    while(temp)
    {
        temp->mostrar();
        if (temp->siguiente == 0)
        {
            cout<<NULL;
        }
        temp=temp->siguiente;
    }
}
 
 
