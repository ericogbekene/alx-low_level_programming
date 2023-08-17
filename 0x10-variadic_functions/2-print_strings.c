#include "variadic_functions.h"

/**
 * print_strings- print string inputs of a variable number of args
 * @separator: character to print
 * @n:number of arguments
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);

	/*s = va_arg(list, char*);*/

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, char*));

		if (separator == NULL)
			continue;

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
