#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -allocates memory on the heap and returns a pointer
 * @b: number of bytes allocated
 *
 * Return: pointer to allocated memory location
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(sizeof(b));

	if (mem == NULL)
		exit(98);
	return (mem);
}
