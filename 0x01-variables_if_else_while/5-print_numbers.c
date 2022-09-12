#include <stdio.h>

/**
 * main -entry point
 * Description: printing alphabets
 * followed by new line
 * here lies the description for this file
 * Return:always 0 (success)
 */

int main()
{
	int num;

	for (num=0; num<=9; num++)
		printf(" %d", num);
	putchar(10);

	return 0;
}
