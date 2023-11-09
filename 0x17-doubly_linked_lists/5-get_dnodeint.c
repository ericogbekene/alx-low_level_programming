#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node at an index
 * @head: pointer to the head of list
 * @index: position to return element from
 *
 * Return: node at index position
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	current = head;
	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
