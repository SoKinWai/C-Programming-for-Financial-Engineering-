#include <stdio.h>
#include<stdlib.h>

int main()
{
	int c;
	int num_chars = 0;
	int num_words = 1;
	int num_lines = 1;
	int pre_c=' ';
    while ((c = getchar()) != 4)
	{
		num_chars++;

		if (c == '\n')
		{
			num_lines++;
		}
		if ((c == ' ' || c == '\t' || c == '\n') && (pre_c != ' ') && (pre_c!= '\t')&&(pre_c!='\n'))
		{
			num_words++;
		}
		pre_c = c;
	
	}
	printf("Number of Characters: %d\n", num_chars);
	printf("Number of newlines:%d\n", num_lines);
	printf("Number of words:%d\n", num_words);


	return 0;
}