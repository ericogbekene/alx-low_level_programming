#include "main.h"

/**
 * flip_bits - returns the number of bits you need to flip
 * @n: input number
 * @m: input number to get to
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int inverse;

	inverse = n ^ m;

	while (inverse)
	{
		count++;
		inverse &= (inverse - 1);
	}
	return (count);
}
