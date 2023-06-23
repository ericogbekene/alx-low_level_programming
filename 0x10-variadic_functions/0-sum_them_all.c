#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all the arguments passed to a function
 * @n: represents the number of arguments passed
 *
 * Return: Always (0) Success
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	int x;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);
	return (sum);
}
