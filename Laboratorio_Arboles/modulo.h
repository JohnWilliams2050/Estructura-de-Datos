#ifndef __MODULO_H__
#define __MODULO_H__
#include <iostream>
struct Nodo{
    int dato;
    struct Nodo *left, *right;
    //Contstructor del nodo
    Nodo(int dato){
        this->dato = dato;
        //inicia sin tener nada dentro de los nodos hijos, iniciando como nodo hoja
        left = right = nullptr;
    }
};

void preOrdenT(struct Nodo *nodo);

void postOrdenT(struct Nodo *nodo);

void inOrdenT(struct Nodo *nodo);

#endif
