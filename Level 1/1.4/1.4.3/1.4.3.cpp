#include<stdio.h>
#include<stdlib.h>

int main()
{   
	int c;
	int pre_c = ' ';
	int chars=0;
	int words=1;
	int lines=1;
    while ((c = getchar()) != 4)
	{
		chars++;
		switch(c)
		{
		case '\n':
			lines++;
		case'\t':
		case' ':if ((pre_c != ' ') && (pre_c != '\n') && (pre_c != '\t'))

		
			words++;
		   break;
		
		}
		pre_c = c;
    }
	printf("Number of Characters: %d\n", chars);
	printf("Number of newlines:%d\n", lines);
	printf("Number of words:%d\n", words);
    return 0;
}

