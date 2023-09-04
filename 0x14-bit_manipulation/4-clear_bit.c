#include "main.h"

/**
 * clear_bit - sets a bit at index to zero for a given n number
 * @n: pointer to an unsigned long int (binary input)
 * @index: position to clear bit to zero
 *
 * Return: 1 on Success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	
	mask = 1UL << index;


	*n = *n & ~mask;

	return (1);

}
