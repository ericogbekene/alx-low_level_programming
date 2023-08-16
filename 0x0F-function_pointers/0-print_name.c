#include "function_pointers.h"

/**
 * print_name - prints a name using function pointer
 * @name: to print
 * @f: a pointer to the function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
