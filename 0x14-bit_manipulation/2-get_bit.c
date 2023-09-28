#include "main.h"

/**
 * get_bit - retrieves the value of a bit at a given index
 * @index: location of the bit to retrieve
 * @n: long integer input
 *
 * Return: bit at given index or -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int buffer = 0;

	if (index > 64)
		return (-1);

	buffer = n >> index;
	return (buffer & 1);
}
