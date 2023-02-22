#include "main.h"

/**
 * _salpha - checks for alphabetic character
 * @c: the character to be checked
 * return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c>= 122))
	{
	return (1);
	}
	return (0);
}
