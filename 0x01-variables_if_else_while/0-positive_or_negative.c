nclude <stdlib.h>

#include <time.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main -entry point
 * Description: printing alphabets
 * followed by new line
 * here lies the description for this file
 * Return:always 0 (success)
 */
int main(void)

{

		 int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				if ( n>0 )
					printf(" %d is positive\n", n);
				if ( n=0 )
					printf(" %d is zero\n", n);
				if ( n<0 )
					printf(" %d is negative\n", n);

					/* your code goes there */

					return (0);

}
