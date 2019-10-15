
#include<stdio.h>

//Write a C-program that calls a function minus(). This function receives two arguments and returns the difference (regular subtraction, not absolute). This difference should be printed on screen.
double minus(double i,double j)
{
	
	double k=j-i;
	
	return k;
}


int main()
{
	double i;
	double j;
	
	printf("Please enter an integer for i:\n");
	scanf_s("%lf",&i);
	printf("Please enter an integer for j:\n");
	scanf_s("%lf",&j);
	minus(i, j);
	printf("Difference of j-i:%lf\n", minus(i,j));
    return 0;
}