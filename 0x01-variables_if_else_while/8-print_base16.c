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
		putchar(ch);

	int cha = 97;
	
	for (cha = 97; cha <= 102; cha++)
		putchar(cha);

	putchar(10);

	return (0);

}
