#include <stdio.h>
#define PI 3.14159f

float calc_area(int radius);
float calc_volume(int radius);

/*A simple function that reads in a radius and prints out the area and volume of a sphere*/
int main(void){
	int radius = 0;
	char option;

	printf("Enter a value for the radius: ");
	scanf("%d", &radius);

	if(radius >= 0){
		printf("Please select a command \n s - for surface \n v - for volume \n b - for both \n");
		printf("Your command: ");
		scanf(" %c", &option);
		
		switch(option){
			case 's': printf("For a radius of %i the area of the sphere is %.2f \n", radius, calc_area(radius));
				  break;
			case 'v': printf("For a radius of %i the volume of the sphere is %.2f \n", radius, calc_volume(radius));
				  break;
			case 'b': printf("For a radius of %i the area of the sphere is %.2f and its volume is %.2f \n", radius, calc_area(radius), calc_volume(radius) );
				  break;
			default:  printf("Please enter a valid command \n");
				  break;
		}
	}
	else{
		
		printf("You cannot enter a negative number \n");
	}
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
