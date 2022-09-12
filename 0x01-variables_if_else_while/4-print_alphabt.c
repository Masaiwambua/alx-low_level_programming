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

	for (ch = 97; ch <= 122; ch++)
	{
		if ((ch == 113) || (ch == 101))
			continue;
		putchar(ch);
	}

	putchar(10);

	return (0);
}
