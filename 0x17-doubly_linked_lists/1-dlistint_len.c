#include "lists.h"

/**
 * dlistint_len - returns the len of a linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
