#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings and return the new string
 * @s1: source string
 * @s2: destination string
 * Return: new string
 */

char *str_concat(char *s1, char *s2)
{
	size_t len_1, len_2, length;
	char *new_string;

	if (s1 != NULL)
	{
		len_1 = strlen(s1);
	}
	else
	{
		len_1 = 0;
	}
	if (s2 != NULL)
	{
		len_2 = strlen(s2);
	}
	else
	{
		len_2 = 0;
	}
	length = len_1 + len_2 + 1;
	new_string = malloc(length * sizeof(char));

	if (new_string == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(new_string, s1);
	}
	else
	{
		new_string[0] = '\0';
	}
	if (s2 != NULL)
	{
		strcat(new_string, s2);
	}
	return (new_string);
}
