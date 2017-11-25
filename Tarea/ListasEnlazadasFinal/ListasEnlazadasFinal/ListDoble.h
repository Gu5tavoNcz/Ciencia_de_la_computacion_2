//
//  ListDoble.h
//  ListasEnlazadasFinal
//
//  Created by Gustavo Ñaupa Canaza on 25/11/17.
//  Copyright © 2017 Gustavo Ñaupa Canaza. All rights reserved.
//

#ifndef ListDoble_h
#define ListDoble_h
#include <iostream>
using namespace std;


template <class T>
class node_{
public:
    node_(T);
    T data;
    node_<T> * next;
    node_<T> * prev;
};




template<class T>
class doble_list{
public:
    doble_list(){head=NULL,longn=0;};
    node_ <T> * buscar_(T n);
    void insertar_(T n);
    void borrar_(T n);
    void print();
private:
    node_ <T> * create_node(T);
    node_ <T> * head;
    int longn;
};

template<class T>
node_ <T>:: node_(T d){
    data=d;
    next=NULL;
    prev=NULL;
};

template<class T>
node_ <T> *  doble_list<T> ::buscar_(T n){
    node_<T> *temp=head;
    if(temp!=NULL){
        while(temp!=NULL && temp->data<n){
            temp=temp->next;
        }
    }
    return temp;
}

template<class T>
void doble_list<T>::borrar_(T n){
    node_<T> *temp=buscar_(n);
    node_<T> *eliminado;
    if(head!=NULL){
        if(temp!=NULL){
            if(temp->data==n){
                if(temp->prev!=NULL && temp->next!=NULL){
                    eliminado=temp;
                    temp->prev->next=temp->next;
                    temp->next->prev=temp->prev;
                    
                }else{
                    if(temp->prev==NULL){
                        eliminado=temp;
                        head=head->next;
                        head->prev=NULL;
                        delete eliminado;
                    }else{
                        eliminado=temp->prev->next;
                        temp->prev->next=NULL;
                        delete eliminado;
                    }
                    
                }
            }
        }
    }
}
template<class T>
void doble_list<T> ::insertar_(T n){
    node_<T> *temp=buscar_(n);
    node_<T> *nuevo=create_node(n);
    if(head!=NULL){
        if(temp!=NULL){
            if(temp!=head){
                nuevo->prev=temp->prev;
                nuevo->next=temp;
                temp->prev->next=nuevo;
                temp->prev=nuevo;
            }else{
                temp->prev=nuevo;
                nuevo->next=temp;
                head=nuevo;
            }
        }else{
            node_<T> *aux=head;
            while(aux->next!=NULL){
                aux=aux->next;
            }
            aux->next=nuevo;
            nuevo->prev=aux;
        }
    }else{
        head=nuevo;
    }
}

template<class T>
node_ <T> * doble_list<T>::create_node(T dat){
    node_<T> *nod=new node_<T>(dat);
    return nod;
}
template<class T>
void doble_list<T> ::print(){
    node_<T>*temp=head;
    if(temp==NULL){
        cout<<" no hay datos"<<endl;
    }else{
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    cout <<"-------------------------\n"<<endl;
    
}

#endif /* ListDoble_h */
