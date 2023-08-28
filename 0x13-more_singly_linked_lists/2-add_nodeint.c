#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: pointer to the first node on the list
 * @n: data input for newly created node
 *
 * Return: pointer to the new node || NULL if failed
 */

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
