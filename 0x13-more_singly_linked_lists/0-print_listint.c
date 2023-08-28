#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
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
