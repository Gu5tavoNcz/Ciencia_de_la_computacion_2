#include <iostream>
#include "Nodo.h"
#include "Listas.h"
#include <time.h>



using namespace std;

int main()
{
    Lista_Simple lista_1();
    lista_1.insertar(5);
    lista_1.mostrar();
    cout << "Hello world!" << endl;
    return 0;
}


//https://ronnyml.wordpress.com/2009/07/04/listas-enlazadas-clase-lista-en-c/
