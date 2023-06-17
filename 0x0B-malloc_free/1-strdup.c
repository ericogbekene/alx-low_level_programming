#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * *_strdup - returns a copied string
 *
 * @str: source of string
 * Return: always (0) success
 */

char *_strdup(char *str)
{
	char *p;

	size_t length = strlen(str);

	p = malloc((length + 1) * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, str);
	return (p);
}
