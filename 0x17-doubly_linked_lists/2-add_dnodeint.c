#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	/*if (newNode == NULL)
		return (NULL);*/

	if (*head == NULL)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;
	*head = newNode;

	return (newNode);

}
