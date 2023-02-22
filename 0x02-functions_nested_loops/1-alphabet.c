#include "main.h"

/**
 * print_alphabet - entry point
 *
 * return: void
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
