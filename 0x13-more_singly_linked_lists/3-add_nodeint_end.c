#include "lists.h"

/**
* add_nodeint_end - add a new node at the end of a list
* @head: pointer to the first node
* @n: integer data type
*
* Return: address of the new nodeode
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node, *current;

	end_node = malloc(sizeof(listint_t));

	if (end_node == NULL)
		return (NULL);

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		current->next = end_node;
	}
	return (end_node);
}
