#include <iostream>
#include "Nodo.h"
#include "Listas.h"


using namespace std;

int main()
{
    Lista_Simple lista_1();
    lista_1.insertar(5);
    lista_1.mostrar();
    cout << "Hello world!" << endl;
    return 0;
}
