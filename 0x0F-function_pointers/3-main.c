#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char op;
	int (*my_ptr)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	my_ptr = get_op_func(argv[2]);
	if (my_ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	op = *argv[2];
	if (((op == '/') || (op == '%')) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	result = my_ptr(num1, num2);
	printf("%d\n", result);
	return (0);

}
