#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * Main -Entry point
 *
 * Return: Always = (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive \n", n);
	else if (n == 0)
		printf("%d is Zero \n", n);
	else
		printf("%d is a negative \n", n);

	return (0);
}