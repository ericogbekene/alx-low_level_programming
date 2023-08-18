#include "variadic_functions.h"

/**
 * print_all - prints all the characters of a variadic function
 * @format: input string
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	/*const char *s;*/

	int i;

	va_list list;

	va_start(list, format);


	for (i = 0; format[i] != '\0'; i++)
	{
		switch (format[i])
		{
		case 'c':
			putchar((char)(va_arg(list, int)));
			break;
		case 'i':
		       printf("%d", va_arg(list, int));
			break;
		case 'f':
		       printf("%f", va_arg(list, double));
			break;
		case 's':
			printf("%s", va_arg(list, char*));
			break;
		default:
			putchar(format[i]);
		}
		putchar(',');
	}
	printf("\n");

	va_end(list);
}
