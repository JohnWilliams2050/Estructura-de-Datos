#include <bits/stdc++.h>
#include <iostream>
#include "modulo.h"

using namespace std;
//
void preOrdenT(struct Nodo *nodo){
    if (nodo==NULL){
        return;
    }
    cout<<nodo->dato<<"->";
    preOrdenT(nodo->left);
    preOrdenT(nodo->right);
}
//
void postOrdenT(struct Nodo *nodo)
{
    if (nodo==NULL){
        return;
    }
    postOrdenT(nodo->left);
    postOrdenT(nodo->right);
    cout<< nodo->dato<<"->";
}

void inOrdenT(struct Nodo *nodo)
{
    if (nodo==NULL){
        return;
    }
    inOrdenT(nodo->left);
    cout<<nodo->dato<<"->";
    inOrdenT(nodo->right);
}
