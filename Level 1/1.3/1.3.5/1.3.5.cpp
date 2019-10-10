# include <stdio.h>

int main()
{
	int i=10;         
	int j = 10;
	int a;
	int b;
	
	
/*postfix operator*/
	a = i--;
	
	printf("value of a:%d \n",a);      /*Equivalent code: a=i; a equals 10.*/
	printf("value of i:%d \n", i);     /*Equivalent code:i=i-1;i equals 9.*/


	
	

	b = --j;
	printf("value of b:%d \n", b);      /*Equivalent code:b=j-1;b equals 9.*/
	printf("value of i:%d \n", j);       /*Equivalent code:j=j-1;j equals 9.*/
	
	








	return 0;
}