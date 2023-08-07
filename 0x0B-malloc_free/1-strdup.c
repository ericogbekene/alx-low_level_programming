#include "main.h"

/**
 * _strdup - returns a pointer to newly allocated memory
 * @str: String to copy
 *
 * Return: Pointer to the newly allocated memory
 */

char *_strdup(char *str)
{
	char *newArray;
	size_t len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	newArray = malloc(len + 1);
	if (newArray == NULL)
		return (NULL);

	strcpy(newArray, str);
	return (newArray);
}
