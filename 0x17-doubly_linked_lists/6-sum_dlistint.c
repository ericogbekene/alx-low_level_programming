#include "lists.h"

/**
 * sum_dlistint - sums the elements of a llist
 * @head: points to the first element of list
 *
 * Return: Sum of all elements
 */

int sum_dlistint(dlistint_t *head)
{
	int summation = 0;
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		summation += current->n;
		current = current->next;
	}

	return (summation);
}
