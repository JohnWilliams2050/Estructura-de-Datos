#ifndef __MODULO_H__
#define __MODULO_H__
#include <iostream>
struct Nodo{
    int dato;//Dato a almacenar en el nodo
    struct Nodo *left, *right;
    //Contstructor del nodo
    Nodo(int dato){
        this->dato = dato;
        //inicia sin tener nada dentro de los nodos hijos, iniciando como nodo hoja
        left = right = nullptr;
    }
};
//Preorder
void preOrdenT(struct Nodo *nodo);
//Postorder
void postOrdenT(struct Nodo *nodo);
//Inorder
void inOrdenT(struct Nodo *nodo);

#endif
