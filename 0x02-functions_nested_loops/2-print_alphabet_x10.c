#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet A-Z ten times
 *
 * return:void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
