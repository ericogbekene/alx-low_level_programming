#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: input number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int j = 0;
	int offset;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (j = n, offset = 0; (j >>= 1) > 0; offset++)
		;

	for (; offset >= 0; offset--)
	{
		if ((n >> offset) & 1)
			printf("1");
		else
			printf("0");
	}
}
