
#include "main.h"

/**
 * main - entry point
 * Description -  calls other functions
 *
 * Return:always 0
 * _isdigit - checks for digits
 */
int main(void)
{
	int c = 50;

	int _isdigit(int c);

	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
/**
 *_isdigit - some words
 * Description: checks for digits
 *c is paramenter
 * Return:1 if successful, otherwise 0
 *
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
		return (0);
}

