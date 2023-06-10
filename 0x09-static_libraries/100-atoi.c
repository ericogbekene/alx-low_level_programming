#include "main.h"

/**
 * _atoi - converts a string to an integer
 *
 * @s: string
 * Return: an integer value
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int result = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= sign;
	return (result);

}
