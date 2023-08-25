#include "lists.h"

/**
 * list_len - counts the number of nodes in a list
 * @h: pointer to the head of list
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *headptr;

	headptr = h;

	if (headptr == NULL)
	{
		printf("Error\n");
		return (0);
	}

	while (headptr != NULL)
	{
		count++;

		if (headptr->str == NULL)
		{
			count--;
		}
		headptr = headptr->next;
	}
	return (count);
}
