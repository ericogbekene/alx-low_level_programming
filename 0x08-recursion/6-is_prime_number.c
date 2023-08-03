#include "main.h"

/**
 * check_divisor - checks checks if n is divisible
 *
 * @n: input
 * @divisor: to check
 *
 * Return: Success
 */

int check_divisor(int n, int divisor)
{
	if (divisor * divisor > n)
		return (0);
	if (n % divisor == 0)
		return (1);
	return (check_divisor(n, divisor + 1));
}
/**
 * is_prime_number - returns 1 if input is prime number or 0 otherwise
 * @n: input number
 *
 * Return: 1 || 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (!check_divisor(n, 2));
}
