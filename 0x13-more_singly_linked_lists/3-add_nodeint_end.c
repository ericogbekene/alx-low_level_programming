#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the first node
 * @n: data input for newnode
 *
 * Return: pointer to the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	if (n != 0)
		newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = newnode; /*insert new node to the next part of ths position*/
	}

	return (newnode);
}
