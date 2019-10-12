
//A C-program that prints two columns with the temperature in degrees Fahrenheit and the equivalent temperature in degrees Celsius.
//The left column shows the temperature in Fahrenheit. The right column shows the temperature in Celsius.
//Start with 0 degrees Fahrenheit and proceed until 300 degrees Fahrenheit.
//Celsius = (5/9) * (Fahrenheit ¨C 32)

#include<stdio.h>

int main()
{
	float Celsius;
	float Fahrenheit;
	int lower = 0; /*Lower is the start temperature for  Fahrenheit. */
	int upper = 300;/*Upper is the end temperature for  Fahrenheit*/
	int step = 20; /*Step is the size for each Fahrenheit to increase.*/


	

	printf("Fahrenheit, Celsius\n\n");
	
	
	Fahrenheit = lower;

	while (Fahrenheit <= upper)
	{
		Celsius = (5.0/ 9.0) * (Fahrenheit-32);
		printf("%10.1f, %10.1f\n", Fahrenheit, Celsius);
		
		Fahrenheit = Fahrenheit + step;





	}

	return 0;
}