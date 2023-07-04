#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the nodes of a singly linked lists
 * @h: pointer to head node
 *
 * Return: number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t n_count = 0;

	while (h)
	{
		if (h->str)
			printf("%s\n", h->str);
		else
			printf("[0](nil)\n");
		n_count++;
		h = h->next;

	}

	return (n_count);
}
