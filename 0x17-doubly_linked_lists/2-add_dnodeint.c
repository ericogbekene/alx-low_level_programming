#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *current;

	newNode = malloc(sizeof(dlistint_t));
	/*if (newNode == NULL)
	  return (NULL);*/

	current = *head;
	if (current == NULL)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		/*current->next = newNode;*/
	}
	else
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = current;
		current = newNode;
	}

	return (newNode);

}
