#include "main.h"

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Sum
 */

int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	int x = 0;
	int y = 0;

	if (argc < 3)
		return (1);

	if (x < 0 || y < 0)
	{
		printf("Error");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		x = atoi(argv[i]);
		sum += x;
	}

	printf("%d\n", sum);
	return (0);

}
