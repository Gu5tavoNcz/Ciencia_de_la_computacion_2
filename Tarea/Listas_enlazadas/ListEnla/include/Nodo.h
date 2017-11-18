#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
private:
    int valor;
    Nodo *siguiente;
public:
    Nodo(int);
    void mostrar_nodo();
};

#endif // NODO_H
