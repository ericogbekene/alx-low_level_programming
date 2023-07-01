#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * *_memset: puts a number of bytes in an allocated memory area
 * @s: memory location to fill
 * @b: character to fill memory location with
 * @n: number of times to insert b
 *
 * Return: pointer to memory location of array s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* char *s; */
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * *_calloc - we will use calloc to allocate enough memory for array
 * @nmemb: number of elements in array
 * @size: of each element
 *
 * Return: pointer to memory location
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int arraySize;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arraySize = nmemb * size;

	ptr = malloc(arraySize);

	if (ptr == (NULL))
		return (NULL);
	memset(ptr, 0, arraySize);

	return (ptr);
}
