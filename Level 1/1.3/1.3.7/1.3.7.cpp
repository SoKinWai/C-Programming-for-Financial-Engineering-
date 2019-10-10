#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("A C-program that efficiently multiplies a number by a factor 2 to the power n. \n");     

	
	int num;
	int power;
	int result;

	printf("Please enter a number for num and an integer for power. (Please enter a , between num and power):\n");
	
	scanf_s("%d,%d", &num,&power);       /*Power should be a positive integer.*/

	

	result = num <<= power;     /*Result= num*2^power */

	printf("The result:%d\n", result);
	

    

	

	

	return 0;
}