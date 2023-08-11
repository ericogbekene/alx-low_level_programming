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
	size_t len1, len2,total_len;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if(n >= len2)
		n = len2;

	if(n < len2)
	{
		while (s2[i] < n && s2[i]!= '\0'; i++)
		{
			strcpy(ptr, s1);
		}
	}

	total_len = (len1 + n + 1);

	ptr = malloc(sizeof(total_len));
	if(ptr == NULL)
		return (NULL);



	strcpy(ptr, s1);

	return (ptr);
}
