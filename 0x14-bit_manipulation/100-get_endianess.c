#include "main.h"

/**
 * get_endianess - a function to check the endianess
 *
 * Return: 1 if little endianess || 0 otherwise
 */

int get_endianness(void)
{
	int digit;

	digit = 1;
	if (*(char *)&digit == 1)
		return (1);

	else
		return (0);
}
