


void preOrdenT(Nodo *nodo){
    if (nodo==NULL){
        return;
    }
    cout<<nodo->dato<<"->";
    preOrden(nodo->left);
    preOrden(nodo->right);
}

void postOrdenT(Nodo *nodo)
{
    if (nodo==NULL)
        return;
    postOrden(nodo->left);
    postOrden(nodo->right);
    cout<< nodo->dato<<"->";
}

void inOrden(Nodo *nodo)
{
    if (nodo)
}