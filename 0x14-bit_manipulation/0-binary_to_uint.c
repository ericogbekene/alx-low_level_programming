#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary input string consisting of 0 & 1
 *
 * Return: unsigned integer conversion
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0, result = 0;

	if (b == NULL)
		return (0);

	else
	{
		for (i = 0; b[i] != '\0'; i++)
		{
			if (b[i] == '0' || b[i] == '1')
				result = (result << 1) + (b[i] - '0');

		}
		return (result);
	}
}
