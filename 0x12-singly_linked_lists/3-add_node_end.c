#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: pointer to a pointer to the first node
 * @str: string input in the data part of node
 *
 * Return: address of the newnode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *current, *newnode;

	newnode = (list_t *) malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	if (str != NULL)
	{
		newnode->str = (char *) strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
	}

	if (*head == NULL)
		*head = newnode;
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newnode;
	}
	return (newnode);
}
