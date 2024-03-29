#include "lists.h"

/**
 * print_dlistint - prints the elements of a llist
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0); /* or -1 */

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
