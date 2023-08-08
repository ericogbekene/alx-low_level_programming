#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: input string
 * @s2: input string
 *
 * Return: a pointer to the memory location of new string
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	size_t len1, len2;
	size_t total_len;

	len1 = strlen(s1);
	len2 = strlen(s2);

	total_len = len1 + len2;

	array = malloc(sizeof(total_len) + 1);

	if (array == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";

	strcpy(array, s1);
	strcat(array, s2);

	return (array);

}
