#include "main.h"

/**
* is_palindrome - returns 1 if a string is palindrome || 0 if not
* @s: input string
*
* Return: Always (0) success
*/

int is_palindrome(char *s)
{
	int i, j;
	int len;

	if (s == NULL)
		return (0);

	len = strlen(s);

	for (i = 0, j = (len - 1); i < j; i++, j--)
	{
		if (s[i] != s[j])
			return (0);
	}
	return (1);
}
