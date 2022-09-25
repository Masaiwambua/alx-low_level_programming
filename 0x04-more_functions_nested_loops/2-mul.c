#include "main.h"
/**
*main - entry point
*Description: calls other functions
*Return: Always 0;
*/

int main(void)
{
	int a = 8764;

	int b = 5647;

	printf("%d multiplied by %d is %d\n", a, b, mul(a, b));

	return (0);
}

int mul(int a, int b)
{
	return (a * b);
}
