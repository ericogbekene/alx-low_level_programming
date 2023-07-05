#include "lists.h"

/**
* get_nodeint_at_index - returns the node at a particular location
* @head: pointer to the first node
* @index: location of node to return
*
* Return: nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *current;

	current = head;

	while (current != NULL)
	{
		if (n == index)
			return (current);

		current = current->next;
		n++;
	}
	return (NULL);
}
