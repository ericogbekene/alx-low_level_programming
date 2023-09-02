#include "main.h"

/**
 * get_bit - returns the value of a bit at a index i
 * @index: position of the bit
 * @n: input bit
 *
 * Return: value at index || -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int buffer;

	if (index > 64)
		return (-1);
	else
	{
		buffer = n >> index;

		return (buffer & 1);
	}
}
