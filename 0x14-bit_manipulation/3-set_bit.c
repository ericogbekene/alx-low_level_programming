#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned int i;*/
	/* unsigned long int *result = 0; */
	unsigned long int mask;

	/* mask = malloc(sizeof(unsigned long int) * 8); */

	/* check for successful malloc */

	mask = 1UL << index;


	/* if (index >= sizeof(unsigned long int) * 8)
		return (-1); */


		*n = *n | mask;

	return (1);

	/* result = n || mask; */
}
