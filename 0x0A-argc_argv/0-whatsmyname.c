#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * i:counter variable
 * @argc: argument count
 *
 * @argv: argument vector
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("The name of the program is: %s\n", argv[0]);
	}
	return (0);
}
