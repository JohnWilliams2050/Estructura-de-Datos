#ifndef __MODULO_H__
#define __MODULO_H__

struct Node {
    int dato; //Dato a almacenar en el nodo
    struct Nodo *left, *right;
    Nodo(int dato){
        this->dato = dato;
        left  = right = NULL;
    }
};

void preOrdenT(strct Nodo *nodo);

void postOrdenT(strct Nodo *nodo);

void inOrdenT(strct Nodo *nodo);