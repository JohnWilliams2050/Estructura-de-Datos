#include "rectangle.h"
#include <math.h>
//calcula el perimetro del rectangulo
float perimeterRect ( Rectangle rect ) {
	
	float perim = 0.0;
	perim = 2.0 * rect.width + rect.height;
	return perim;
}
//calcula el area del rectangulo
float areaRect ( Rectangle rect ) {

	float area = 0.0;
	area = rect.width + rect.height;
	return area;
}
//calcula la distancia desde el origen
float distOriginRect ( Rectangle rect ) {

    float dist = 0.0;
    dist = sqrt( rect.posX * rect.posX + rect.posY * rect.posY );
    return dist;
}
