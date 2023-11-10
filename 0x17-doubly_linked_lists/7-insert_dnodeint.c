#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at index
 * @h: pointer to head of list
 * @idx: position to insert
 * @n: data to insert
 *
 * Return: address of inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;

	unsigned int position = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	current = *h; /* set current to head of list */

	/* move current ptr until positin b4 index */
	while (current != NULL && position < (idx - 1))
	{
		current = current->next;
		position++;
	}

	if (position > idx && current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	new_node->prev = current;

	if (current != NULL)
	{
		if (current->next != NULL)
		{
			current->next->prev = new_node;
		}
	}
	current->next = new_node;
	return (new_node);
}
