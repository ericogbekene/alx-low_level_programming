#include "main.h"

/**
 * set_bit - sets a bit at a particular index to 1 (on) for a given n
 * @n: pointer to a long int (binary number
 * @index: position to set bit
 *
 * Return: 1 success
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;


	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | mask;

	return (1);
}
