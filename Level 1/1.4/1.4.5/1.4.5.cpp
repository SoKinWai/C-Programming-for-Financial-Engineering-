
/*Celsius = (5/9) * (Fahrenheit ¨C 32)*/
/*Fahrenheit = (9.0/5.0) * celsius + 32.0*/

#include<stdio.h>

int main()
{
	float Celsius;
	float Fahrenheit;
	int lower = 0; /*Lower is the start temperature for  Celsius. */
	int upper = 19;/*Upper is the end temperature for  Celsius.*/
	int step = 1; /*Step is the size for each Celsius to increase.*/




	printf("Celsius, Fahrenheit\n\n");


	Celsius = lower;

	while (Celsius <= upper)
	{
		Fahrenheit = (9.0 / 5.0) * Celsius + 32.0;
		printf("%10.1f, %10.1f\n", Celsius, Fahrenheit);

		Celsius = Celsius + step;





	}

	return 0;
}