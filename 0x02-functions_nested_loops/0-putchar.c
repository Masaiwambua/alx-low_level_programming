#include "main.h"
#include <stdio.h>
/**
 * main -entry point
 *
 * Return:always 0 (success)
 */

int main(void)
{
	int ch[] = {(95), (112), (117), (116), (99), (104), (97), (114)};

	printf("%c%c%c%c%c%c%c", ch[0], ch[1], ch[2], ch[3], ch[4], ch[5], ch[6]);
	printf("%c", ch[7]);

	putchar(10);


	return (0);
}
