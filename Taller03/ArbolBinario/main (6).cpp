#include<iostream>
#include "ArbolBinario.h"
#include "NodoBinario.h"

using namespace std;

int main(int argc, char* argv[])
{
    ArbolBinario<int> arbolito;
	for(int i=0; i<7; i++)
	{
		int dato;
		cout<<"el dato a insertar en el arbol:\n";
		cin>>dato;
		arbolito.insertar(dato);
	}
	
	cout<<"Nivel Orden:\n";
	arbolito.nivelOrden();
	cout<<endl<<"PreOrden: \n";
	arbolito.preOrden();
	cout<<endl<<"posOrden: \n";
	arbolito.posOrden();
	cout<<endl<<"InOrden: \n";
	arbolito.inOrden();
	cout<<endl<<"Ahora se va a eliminar el nodo 11:\n";
	int el = 11;
	cout<<arbolito.eliminar(el);
	cout<<endl<<"resultado:\n";
	arbolito.nivelOrden();
	return 0;
}