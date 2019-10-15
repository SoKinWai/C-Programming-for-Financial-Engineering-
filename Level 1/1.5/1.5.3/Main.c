#include<stdio.h>
/*Write a program that consists of two source-files. The first (Main.c) contains the main() function and gives the variable i a value. The second source-file (Print.c) multiplies i by 2 and prints it.
Print.c contains the function print() which can be called from main().*/
int main()
{
	int i;
	printf("Please enter a number for i:\n");
	scanf_s("%d", &i);
	
	print(i);
	return 0;
}