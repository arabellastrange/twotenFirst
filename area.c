#include <stdio.h>
#define PI 3.14159f

float calc_area(int radius);

/*A simple function that prints out the area of a sphere*/

int main(void){
	int radius = 7;

	printf("For a radius of %i he area of the sphere is %.2f \n", radius, calc_area(radius) );

	return 0;
}

/* A function which calculates the surface area of a sphere */

float calc_area(int radius){
	float sArea;
	sArea = 4*PI*(radius*radius);
	return sArea;
	/*should return aprox 615.752*/

}