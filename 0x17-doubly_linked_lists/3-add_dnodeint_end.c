#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: address of the head of the list
 * @n: data elememt to insert
 *
 * Return: address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;

		}
		current->next = newNode; /* end of list, perform insert op */
		newNode->n = n;
		newNode->prev = current;
		newNode->next = NULL;
	}

	return (newNode);


}
