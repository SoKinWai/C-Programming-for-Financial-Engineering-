#include<stdio.h>
#include<stdlib.h>

int main()
{
 /*A C-program that shifts any number two places to the right.*/

	int input;    /*Input should be an integer.*/
	int shifted; /*Shifted will be the shifted number.*/

	printf("Input an integer:");
	
	scanf_s("%d", &input);

	shifted = input >> 2;

	printf("An integer shifts two places to the right:%d\n", shifted);

	if (input < 0)
	{
		printf("Negative integer was inserted\n");

		if (shifted < 0)
		{
			printf("Arithetic right shift was performed.\n");
		}
		else {
			printf("Logical right shift was performed.\n");
		}
		}
	

	else
	{
		printf("Non-negative integer was inserted,Arithmetic right shift was performed,\n");
	}




	return 0;
}