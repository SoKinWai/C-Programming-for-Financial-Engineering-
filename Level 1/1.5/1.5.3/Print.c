#include<stdio.h>
/*Write a program that consists of two source-files. The first (Main.c) contains the main() function and gives the variable i a value. The second source-file (Print.c) multiplies i by 2 and prints it.
Print.c contains the function print() which can be called from main().*/
int print(i)
{
	
	int j;
	j = i * 2;
	printf("The value of j is:%d\n", j);
    return j;
}