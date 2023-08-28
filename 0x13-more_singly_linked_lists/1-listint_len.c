#include "lists.h"

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
