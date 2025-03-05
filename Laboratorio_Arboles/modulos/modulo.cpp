#include <bits/stdc++.h>
#include <iostream>
#include "modulo.h"

using namespace std;
//Revisa que el nodo no sea NULL. Despues imprime la raíz, despues el subárbol izquierdo, y finalmente imprime el subárbol derecho.
void preOrdenT(struct Nodo *nodo){
    if (nodo==NULL){
        return;
    }
    cout<<nodo->dato<<"->";
    preOrdenT(nodo->left);
    preOrdenT(nodo->right);
}
//Revisa que el nodo no sea NULL. Despues imprime el subárbol izquierdo, imprime el subárbol derecho, y finalmente imprime la raíz.
void postOrdenT(struct Nodo *nodo)
{
    if (nodo==NULL){
        return;
    }
    postOrdenT(nodo->left);
    postOrdenT(nodo->right);
    cout<< nodo->dato<<"->";
}
//Revisa que el nodo no sea NULL. Despues imprime subárbol izquierdo, despues imprime la raíz, y finalmente imprime el subárbol derecho.
void inOrdenT(struct Nodo *nodo)
{
    if (nodo==NULL){
        return;
    }
    inOrdenT(nodo->left);
    cout<<nodo->dato<<"->";
    inOrdenT(nodo->right);
}
