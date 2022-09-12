#include <stdio.h>
/**
 * main -entry point
 * Description: printing alphabets
 * followed by new line
 * here lies the description for this file
 * Return:always 0 (success)
 */

int main(void)
{
	int ch = '0';
	
	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch), putchar(44), putchar(32);
	putchar(10);

	return (0);
}
