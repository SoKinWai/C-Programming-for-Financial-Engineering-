/* Assignment operators */

#include <stdio.h>

int main()
{
	int x = 2;
	int y;
	int z;

	x *= 3 + 2;
	printf("x=%d\n", x);    /*x equals 10. x=x*(3+2) */

	x *= y = z = 4;
	printf("x=%d\n", x);   /*x equals 40. x=x*4 */

	x = y == z;
	printf("x=%d\n", x);   /* x equals 1. From previous part, y and z equals 4, so (y==z) is true. Then x equals 1. */
	return 0;

}