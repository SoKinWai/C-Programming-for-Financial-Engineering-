# include<stdio.h>

int main()
{
	
	int c;
	
	scanf_s("%d", &c);   // Assign 0 is false, nonzero is true

	

	printf(c == 0? "unmarried\n" : "married\n");

	return 0;


}