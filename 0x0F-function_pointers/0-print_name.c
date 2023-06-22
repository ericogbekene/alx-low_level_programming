#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * print_name - function to print name
 * @name: character string
 * @f: function pointer
 *
 * Return: always (0) success
 */

void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	if (name == NULL || f == NULL)
	{
		return;
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		f(&name[i]);
	}
}
