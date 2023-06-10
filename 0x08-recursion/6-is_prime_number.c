#include "main.h"

/**
 * is_prime_number - checks if a number is a prime number
 * @n: input number
 *
 * Return: Always (0)
 */

int is_prime_number(int n)
{
	if (n < 2)
		return(0);
	int s_root = sqrt(n);
	int i;
       for (int i = 2; i <= s_root; i++)
       {
	       if (n % i == 0) 
	       {
		       return (0);
	       }
       }
       return (1);
}
