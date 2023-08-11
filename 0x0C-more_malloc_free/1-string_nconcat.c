#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: input string 1
 * @s2: input string 2
 * @n: n bytes to add
 *
 * Return: memory location with new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	char *ptr;
	size_t len1, len2, total_len;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (n >= len2)
		n = len2;

	total_len = (len1 + n + 1);

	ptr = malloc(total_len);
	if (ptr == NULL)
		return (NULL);

	strcpy(ptr, s1);

	if (n > 0)
	{
		while (s2[i] != '\0' && i < n)
		{
			ptr[len1 + i] = s2[i];
			i++;
		}
		ptr[len1 + i] = '\0';
	}
	return (ptr);
}
