#include "Nodo.h"

Nodo::Nodo(int miValor)
{
    valor=miValor;
    siguiente=NULL;
}


void Nodo::mostrar_nodo()
{
    cout<<valor<<"->";
}


Nodo::~Nodo()
{
    //dtor
}
