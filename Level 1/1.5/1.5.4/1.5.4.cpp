#include<stdio.h>
/*Write a recursive function printnumber() which gets the number to be printed. This number is an integer. 
The function should print the number digit by digit by using the putchar() function. Don¡¯t use printf().*/

int printnumber(int i)
{
	if (i < 0)
	{
		putchar('-');
		i = -i;
	}
	
	if ((i / 10) > 0)
	{
		printnumber(i / 10);
	}
	
	return putchar(i % 10 + '0');
	
	//return 0;
}

int main()
{
	int i;
	scanf_s("%d", &i);	 /*Please input an integer.*/
	printnumber(i);
	putchar('\n');
	return 0;
	
}