#include <stdio.h>

int main(void) /* to print the alphabet */
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
		putchar(ch);
	for (ch = 65; ch <= 90; ch++)
		putchar(ch);
	putchar(10);

	return (0);
}
