#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pounter to first elemet
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	/*free(current);*/
}
