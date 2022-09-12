#include <stdio.h>

int main()
{
	int ch = '0';
	
	for (ch='0'; ch<='9'; ch++)
		putchar(ch), putchar(44), putchar(32);

	putchar(10);

	return 0;

}
