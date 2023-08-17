#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	/*char *s;*/
	
	va_list list;

	va_start(list, n);

	/*s = va_arg(list, char*);*/

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(list, char*));
		
		if (separator == NULL)
			continue;

		if (separator != NULL && i < (n-1))
		{
			printf("%s", separator);
		}
	}
	va_end(list);

	printf("\n");
}
