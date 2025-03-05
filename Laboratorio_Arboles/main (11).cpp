/******************************************************************************
 * Juan Pabon Vargas
 * 3/5/2025

*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;


int main()
{
    struct Nodo *arbol0 = new Nodo(7);
    arbol0->left = new Nodo(3);
    arbol0->right  = new Nodo(20);
    arbol0->left->left = new Nodo(0);
    arbol0->left->right = new Nodo(5);
    arbol0->left->left->left = new Nodo(-3);
    arbol0->left->left->right = new Nodo(1);
    arbol0->left->right->left = new Nodo(4);
    arbol0->left->right->left = new Nodo(6);
    
    arbol0->right->left  = new Nodo(15);
    arbol0->right->right  = new Nodo(25);
    arbol0->right->right->right  = new Nodo(30);
    
    cout<<"\n PreOrden ";
    preOrden(arbol0);
    cout<<"\n PostOrden ";
    postOrden(arbol0);
    cout<<"\n InOrden "

    return 0;
}