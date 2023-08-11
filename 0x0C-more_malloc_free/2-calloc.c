#include "main.h"

/**
 * _calloc - allocates memory for array of size
 * @nmemb: n elements int the array
 * @size: in bytes
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	if (array)
		memset(array, 0, nmemb * size);

	return (array);
}
