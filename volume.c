#include <stdio.h>
#define PI 3.14159f

float calc_area(int radius);
float calc_volume(int radius);

/*A simple function that prints out the area and volume of a sphere*/
int main(void){
	int radius = 7;

	printf("For a radius of %i the area of the sphere is %.2f and its volume is %.2f \n", radius, calc_area(radius), calc_volume(radius) );

	return 0;
}

/* A function which calculates the surface area of a sphere */

float calc_area(int radius){
	float sArea;
	sArea = 4*PI*(radius*radius);
	return sArea;
	/*should return aprox 615.752*/

}

/* A function which calculates the volume of a sphere */
float calc_volume(int radius){
	float sVolume;
	sVolume = (4.000f/3.000f)*PI*(radius*radius*radius);
	return sVolume;
	/* should reutrn aprox 1436.76 */
}
