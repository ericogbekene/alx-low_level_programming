#include "3-calc.h"

/**
 * get_op_func - gets the operator function and returns it
 * @s: operator
 *
 * Return: pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

int i;

while (ops[i].op != NULL)
{
	if (strcmp(ops[i].op, s) == 0)
	{
		return (ops[i].f);
	}
	i++;
}
return (NULL);
}
