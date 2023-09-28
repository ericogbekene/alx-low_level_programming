#include "main.h"

/**
 * print_binary - prints the binary represenation of a number
 * @n: number to be converted
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int idx;
	int count;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	idx = n;
	for (count = 0; (idx >>= 1) > 0; count++)
		;
	for (; count >= 0; count--)
	{
		if ((n >> count) & 1)
			_putchar('1');
		else
			_putchar('0');
	}

}
