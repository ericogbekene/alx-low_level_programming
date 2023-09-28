#include "main.h"

/**
 * clear_bit - a function to clear a bit at an index to 0
 * @n: pointer to the UL integer input
 * @index: position at which to clear
 *
 * Return: 1 on success or -1 if failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~mask;
	return (1);
}
