#include "lists.h"

/**
 * print_list - traverses a list and prints it's elements
 * @h: pointer to head node of the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *head;

	head = h;

	if (head == NULL)
	{
		printf("Error\n");
		return (0);
	}

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u],%s\n", head->len, head->str);


		count++;
		head = head->next;
	}

	return (count);
}
