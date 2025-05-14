/*********************
*Nombre: Juan Pabon Vargas
*Fecha: 14 de Mayo, 2025
*Tema: Estructura de Datos
*Descripcion: En este programa se crea una matriz de adyacencia y se usa el algoritmo de Floyd Warshall
*para encontrar el camino mas corto entre todos los vertices
*/



#include <iostream>
#include <vector>
using namespace std;
//funcion que encuentra el camino mas corto. Compara los valores anteriores con los nuevos para determinar cual tienen menor costo
void floyds(vector<vector<int>> b){
	int i, j, k;
	for (k = 0; k < 5; k++) {
		for (i = 0; i < 5; i++) {
			for (j = 0; j < 5; j++) {
				if ((b[i][k] * b[k][j] != 0) && (i != j)) {
					if ((b[i][k] + b[k][j] < b[i][j]) || (b[i][j] == 0)) {
						b[i][j] = b[i][k] + b[k][j];
					}
				}
			}
		}
	}
	//imprime el costo minimo de cada nodo
	for (i = 0; i < 5; i++) {
		cout<<"Minimum Cost With Respect to Node:"<<i<<endl;
		for (j = 0; j < 5; j++) {
			cout<<b[i][j]<<"\t";
		}
	}
}
int main(){
	vector<vector<int>> b;
	int inf = 0xFFFF;
	//un valor grande que representa infinito en la matriz. Esto se usa cuando no hay camino entre nodos
	int ent;
	//vector de vectores que contiene la matriz de adyacencia
	b = {{0,5,inf,6,2},{inf,0,1,inf,7},{3,inf,0,4,inf},{inf,inf,2,0,3},{2,inf,inf,5,0}};
	floyds(b);
	return 0;
}
