#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline
 * @s: String to print
 *
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
