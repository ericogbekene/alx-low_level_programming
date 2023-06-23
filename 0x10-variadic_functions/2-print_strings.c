#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints string characters
 * @separator: a seperating string to print in between
 * @n: number of strings
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int j;
	char *myString;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		myString = va_arg(args, char *);

		for (j = 0; j <= myString[i]; j++)
		{
			if (myString == NULL)
		{
			printf("nil");
		}
		}
		if (myString != NULL)
		{
			printf("%s", myString);

			if (separator != NULL && i < (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");

	va_end(args);
}
