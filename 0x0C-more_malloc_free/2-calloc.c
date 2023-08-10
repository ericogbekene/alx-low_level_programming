#include "main.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(sizeof(int) * nmemb);
	if (array == NULL)
		return (NULL);

	return (array);
}
