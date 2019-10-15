#include<stdio.h>
/*Write a C-program that prints the factorials of a number.*/
/*Must make use of a recursive function.*/
/*Output shoule be the factorials of a non-negative integer.*/

 long long int factorial_function(unsigned int a)			
{                                                                 
	if (a ==0)
	{
		return 1;				/*0!=1*/
	}
	
	else {
		return a * factorial_function(a - 1);		/*factorial_function=a*facorial_function(a-1).*/
	}
}

int main()
{      
	// Return the factorials of the integer.
	 int a;
	 long long int factorial;
	 printf("Please enter a non negative integer:\n");		/*Ask the user to enter a non negative integer.*/
	 scanf_s("%d", &a);
	 factorial = factorial_function(a);
	 printf("Factorial is:%lld\n", factorial);
	 return 0;
}
