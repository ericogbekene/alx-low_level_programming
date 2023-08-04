#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument count
 *
 * Return: (0) on Success
 */

int main(int argc, char **argv)
{
	int mul;
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
