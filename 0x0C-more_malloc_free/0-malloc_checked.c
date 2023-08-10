#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b:
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
