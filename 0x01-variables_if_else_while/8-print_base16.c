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
	int ch;
	{
		for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	
		for (ch = 97; ch <= 102; ch++)
		putchar(ch);
	}

	putchar(10);

	return (0);

}
