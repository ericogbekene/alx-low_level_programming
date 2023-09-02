#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: input number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned int j = 0, len = 0, bit = 0;
	char *binaryvalue = NULL;

	binaryvalue = malloc(sizeof(int) * n);
	if (binaryvalue == NULL)
		return;

	if (n == 0)
	{
		_putchar('0');
	}

	while (n > 0)
	{
		bit = n & 1;
		*binaryvalue = bit;
		binaryvalue++;
		n = n >> 1;
		len++;
	}
	_putchar('0');
	_putchar('b');

	/* len = strlen(binaryvalue); */

	for (j = (len - 1); j > 0; j--)
	{
		_putchar(binaryvalue[j]);
	}
	_putchar('\n');

}
