#include <stdio.h>

int main ()
{
	int ch;

	for (ch=122; ch>=97; ch--)
		putchar(ch);
	putchar(10);

	return 0;
}
