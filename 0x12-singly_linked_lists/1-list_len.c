#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *headptr;

	headptr = h;

	if (headptr == NULL)
	{
		printf("Error\n");
		return (-1);
	}

	while (headptr != NULL)
	{
		count++;
		headptr = headptr->next;

		if (headptr->str == NULL)
		{
			count++;
			return (1);
			headptr = headptr->next;
		}
	}
	return (count);
}
