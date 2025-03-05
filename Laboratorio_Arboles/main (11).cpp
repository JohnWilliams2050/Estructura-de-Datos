/******************************************************************************
 * Autor: Juan Pabon Vargas
 * Fecha: 3 de Marzo, 2025
 * Curso: Estructura de Datos
 * Descripción: En este programa se van a imprimir los nodos de un árbol de ejemplo dado en clase en Preorder, PostOrder, y Inorder. Se usó modulación.
*******************************************************************************/
#include <bits/stdc++.h>
#include <iostream>
#include "modulos/modulo.h"
using namespace std;


int main()
{
    //Se construye el arbol de prueba
    struct Nodo *arbol0 = new Nodo(7);
    arbol0->left = new Nodo(3);
    arbol0->right  = new Nodo(20);
    arbol0->left->left = new Nodo(0);
    arbol0->left->right = new Nodo(5);
    arbol0->left->left->left = new Nodo(-3);
    arbol0->left->left->right = new Nodo(1);
    arbol0->left->right->left = new Nodo(4);
    arbol0->left->right->right = new Nodo(6);
    
    arbol0->right->left  = new Nodo(15);
    arbol0->right->right  = new Nodo(25);
    arbol0->right->right->right  = new Nodo(30);
    
    //realiza los procesos
    cout<<"\n PreOrden ";
    preOrdenT(arbol0);
    cout<<"\n PostOrden ";
    postOrdenT(arbol0);
    cout<<"\n InOrden ";
    inOrdenT(arbol0);

    return 0;
}
