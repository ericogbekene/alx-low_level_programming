#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be flipped
 * @n: input number
 * @m: input number two
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
