#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at an index
 * @h: pointer to the first node
 * @idx: index to insert at
 * @n: data element to insert in list
 *
 * Return: address of new element
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current;
	dlistint_t *newNode;

	if (h == NULL)
		return (NULL);

	current = *h;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == (idx - 1))
		{
			newNode->n = n;
			newNode->prev = current;
			newNode->next = current->next;
			current->next = newNode;

		}
		count++;
		current = current->next;
	}

	return (newNode);
}
