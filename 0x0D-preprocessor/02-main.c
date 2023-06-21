#include <stdio.h>

/**
 * main - prints the file it was compiled from
 * _FILE_:
 *
 * Return: Always (0) sucess
 */

int main(void)
{
	printf("This programme was compiled from the :%s\n", __FILE__);
	return (0);
}
