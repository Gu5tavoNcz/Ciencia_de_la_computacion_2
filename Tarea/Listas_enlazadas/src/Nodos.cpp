#include "Nodos.h"


template<typename T>
Nodo<T>::Nodo()
{
    valor=NULL;
    siguiente=NULL;
}

template<typename T>
Nodo<T>::Nodo(T miValor)
{
    valor=miValor;
    siguiente=NULL;
}
