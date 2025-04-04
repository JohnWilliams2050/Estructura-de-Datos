// exercise1.cxx (Andrea Rueda)

// Main program that uses the functionality of rectangle.h
/*
* Comantador: Juan Pabon Vargas
* En este programa se crea un rectángulo y se ejecuta una operaciones para determina el Área, Perímetro y la distancia del rectángulo al origen
*/

#include <iostream>
#include "rectangle.h"

using namespace std;

int main () {
	//declarando una instancia del rectangulo
	Rectangle rect1;
	int a, b;
	//datos para el rectangulo
	cout << "Ingrese coordenada X de la posicion del rectangulo: ";
	cin >> rect1.posX;
	cout << "Ingrese coordenada Y de la posicion del rectangulo: ";
	cin >> rect1.posY;
	cout << "Ingrese ancho del rectangulo: ";
	cin >> rect1.width;
	cout << "Ingrese alto del rectangulo: ";
	cin >> rect1.height;
	//Se ejecuta las operaciones de rectangle.h
	cout << "\nPerimetro del rectangulo: " << perimeterRect( rect1 ) << endl;
	cout << "Area del rectangulo: " << areaRect( rect1 ) << endl;
	cout << "Distancia del rectangulo al origen de coordenadas: " << distOriginRect( rect1 ) << endl;

	return 0;
}
