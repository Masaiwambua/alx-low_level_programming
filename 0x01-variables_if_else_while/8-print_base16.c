#include <stdio.h>

int main()
{
	int ch = '0';
	
	for (ch='0'; ch<='9'; ch++)
		putchar(ch);

	int cha = 97;
	
	for (cha=97; cha<=102; cha++)
		putchar(cha);

	putchar(10);

	return 0;

}
