#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	else
	{
		newnode->n = n;
		newnode->next = NULL;
	}

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
