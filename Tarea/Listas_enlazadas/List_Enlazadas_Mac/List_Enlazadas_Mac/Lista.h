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
    void agregar(int);
    void buscar(int);
    void eliminar(int);
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

void ListaSimple::buscar(int miValor)
{
    Nodo *temp = cabeza;
    int cont=0;
    int cont2=1;
    while(temp)
    {
        if(temp->valor == miValor)
        {
            cout << "El dato se encuentra en la posición: " << cont << "\n" << endl;
            cont2++;
        }
        temp = temp->siguiente;
        cont++;
        if (cont2 == 0)
            cout << "No existe el numero en la lista" << "\n" <<endl;
    }
}

void ListaSimple::eliminar(int miValor)
{
    Nodo *temp = cabeza;
    Nodo *temp2 = cabeza->siguiente;
    int cont = 0;
    while(temp)
    {
        if (cabeza->valor == miValor)
            cabeza = temp->siguiente;
        else
        {
            while(temp2)
            {
                if(temp2->valor == miValor)
                {
                    Nodo *auxiliar = temp2;
                    temp->siguiente = temp2->siguiente;
                    delete auxiliar;
                    cont++;
                    numNodos--;
                }
                temp = temp->siguiente;
                temp2 = temp2->siguiente;
            }
        }
        if (cont == 0)
            cout << "No existe el dato\n"<< endl;
    }
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
    cout<<"\n\nNumero de nodos: "<<numNodos<<"\n"<<endl;
}
 
 
