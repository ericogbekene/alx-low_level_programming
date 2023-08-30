#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a particular {index} location
 * @head: pointer to the first node
 * @index: position to return the node
 *
 * Return: address of the node at that index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	else
	{
		while (head)
		{
			if (count == index)
				return (head);

			count++;
			head = head->next;
		}
		return (NULL);
	}
}
