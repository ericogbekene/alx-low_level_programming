#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string source
 * @s2: string destination
 * @n: number of bytes
 *
 * Return: Always (0) Success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, len1 = 0, len2 = 0;

	if (s1 != NULL)
	{
		len1 = 0;
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	if (s2 != NULL)
	{
		len2 = 0;
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));
	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (p == NULL)
		return (NULL);
	for (; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < (len1 + n); i++)
	{
		if (n < len2)
			p[i] = s2[i];
		i++;
	}
	for (i = 0; i < (len1 + len2); i++)
	{
		if (n >= len2)
			p[i] = s2[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
