#include "variadic_functions.h"

/**
 * print_numbers - prints numbers of a variable list
 * @separator: character to print between
 * @n: number of arguments passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		else
		{
			printf("%d", va_arg(list, int));
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(list);
}
