#ifndef LISTAS_H
#define LISTAS_H
#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Nodo.h"
//#include "Nodo.cpp"


using namespace std;


class Lista_Simple
{
private:
    Nodo *cabeza;
    int num_nodos;
public:
    Lista_Simple();
    void insertar(int);
    void mostrar();
};

#endif // LISTAS_H
