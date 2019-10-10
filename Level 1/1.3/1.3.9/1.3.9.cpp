/* Conditional expressions */
#include <stdio.h>


int main()
{
	int x = 1;
	int y = 1;
	int z = 1;

	x += y += x;                         /*x+=(y+=x), so y+=x is y=y+x=2 and x=x+y=3*/
	printf("%d\n\n", (x<y) ? y : x);      // Number 1 :the result would be  3, because x=3 and y=2, x<y is not true, then the result would be assigned 'x' and x=3
	printf("%d\n", (x<y) ? x++ : y++);    // Number 2 :the result would be 3, because x=3 and y=2, x<y is not true, then the result would be assigned 'y++" and y++=y+1=2+1=3
	printf("%d\n", x);                // Number 3 : the result would be 3, because from the previous parts, we can know x=3
	printf("%d\n", y);                // Number 4: the result would be 3, because from the previous parts, we can know y=3

	return 0;
}