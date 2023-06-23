#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a separator
 * @separator: string charachter to print as seperator
 * @n: number of integers passed
 *
 * Return: Always (0) Success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	int num;

	va_start(args, n);

	for (i = 0; i <= n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);

