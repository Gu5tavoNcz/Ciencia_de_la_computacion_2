#include "Nodo.h"


Nodo::Nodo()
{
    valor=NULL;
    siguiente=NULL;
}

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
