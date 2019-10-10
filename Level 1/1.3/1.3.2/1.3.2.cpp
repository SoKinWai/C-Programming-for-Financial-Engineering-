/*A program that calculates the surface of a triangle with one 90 degree angle.*/



#include <stdio.h>

int main() {

	float base;         /*Base is the base of the right triangle.*/
	float height;       /*Height is the height of the right triangle.*/
 	double surface;           /*Surface is the area of the right triangle.*/
    
	printf("Input base and height of the right triangle:\n");
	
	scanf_s("%f,%f", &base, &height);  /*Please put a "," between base and height.*/
	surface = 0.5*base*height;      /*The formula is half the height multiplied by the base.*/

	printf("Surface of the right triangleis: %f\n", surface);



		return 0;







}