#include "main.h"

/**
 * get_endianness - function to check endianness
 *
 * Return: 0 if big endian or 1 if little endian
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
