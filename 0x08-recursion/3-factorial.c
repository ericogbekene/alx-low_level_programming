#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: Number to operate on
 *
 * Return: (0) Success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n < 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
