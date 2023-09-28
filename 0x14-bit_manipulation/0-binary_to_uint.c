#include "main.h"

/**
 * binary_to_uint - converst a binary digit to unsidgned int
 * @b: binary input string
 *
 * Return: converted binary number to unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int idx = 0, result = 0;

	if (b == NULL)
		return (0);

	for (idx = 0; b[idx] != '\0'; idx++)
	{
		if (b[idx] == '1' || b[idx] == '0')
			result = (result << 1) + (b[idx] - '0');

		if (!(b[idx] >= '0' && b[idx] <= '9'))
			return (0);
	}
	return (result);
}
