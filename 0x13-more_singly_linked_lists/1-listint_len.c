#include "lists.h"

/**
 * listint_len - returns the length of a singly linked list
 * @h: pointer to the first node
 *
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (0);
	}
	else
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	return (count);
}
