#include "lists.h"

/**
 * add_dnodeint - function to add a node to a list
 * @head: points to the head of the list
 * @n: data to insert into new node
 *
 * Return: address of new node || NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *current;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	current = *head;
	if (current == NULL)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = current;
		current->prev = newNode;
		*head = newNode;
	}

	return (newNode);

}
