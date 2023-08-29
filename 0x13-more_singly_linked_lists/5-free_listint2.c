#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 * @head: pointer to the head node of the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	else
	{
		while (*head != NULL)
		{
			current = *head;
			*head = current->next;
			free(current);
		}
		*head = NULL;
	}
}
