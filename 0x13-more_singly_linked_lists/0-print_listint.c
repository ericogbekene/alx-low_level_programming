#include "lists.h"

/**
 * print_listint - prints the elements of a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (0);
	}

	else if (h != NULL)
	{
		while (h != NULL)
		{
			count++;
			printf("%d\n", h->n);
			h = h->next;
		}
		/*return (count);*/
	}
	return (count);
}
