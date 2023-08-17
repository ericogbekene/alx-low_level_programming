#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv:argument vector
 *
 * Return: (0) on success
 */

int main(int argc, char **argv)
{
	int num1 = 0, num2 = 0, result;
	char *op;
	int (*ptr)(int, int);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(op);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	/*ptr = get_op_func(op);*/

	result = ptr(num1, num2);
	printf("%d\n", result);

	return (0);

}
