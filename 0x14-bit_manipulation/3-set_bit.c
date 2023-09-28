#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: input number
 * @index: position at which to set bit
 *
 * Return: result after setting bit or -1 on failure
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
