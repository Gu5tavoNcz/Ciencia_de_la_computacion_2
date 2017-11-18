#include "Listas.h"

Lista_Simple::Lista_Simple()
{
    num_nodos=0;
    cabeza=NULL;
}

void Lista_Simple::insertar(int dato)
{
    Nodo *nuevo_nodo=new Nodo(dato);
    Nodo *temp=cabeza;
}


void Lista_Simple::mostrar()
{
    Nodo *temp=cabeza;
    if(!cabeza)
    {
        cout<<"La lista esta vacia"<<endl;
    }
    else
    {
        while(temp)
        {
            temp->mostrar_nodo();
            if(!temp->next)
                cout<<"NULL";
            temp=temp->siguiente;
        }
    }
    cout<<"\n"<<endl;
}

/*
void List<T>::print()
{
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
                temp = temp->next;
        }
  }
  cout << endl << endl;
}

*/

