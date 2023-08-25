#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head of a list
 * @str: string element member of the new node
 *
 * Return: pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;


	if (head == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	else if (newnode != NULL)
	{
		newnode->len = strlen(str);
		newnode->str = strdup(str);
	}

	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
