#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	/* unsigned long int *result = 0; */
	unsigned long int *mask;

	mask = 1 << index;


	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	for (i = 0; n[i] != '\0'; i++)
	{
		n[i] = n[i] | mask[i];
	}
	return (1);

	/* result = n || mask; */
}
