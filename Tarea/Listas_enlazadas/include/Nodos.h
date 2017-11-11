#ifndef NODOS_H
#define NODOS_H

#include <iostream>

using namespace std;


template <class T>
class Nodo
{
private:
    T valor;
    Nodo *siguiente;
public:
    Nodo();
    Nodo(T);
};

#endif // NODOS_H
