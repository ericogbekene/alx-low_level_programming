#include "lists.h"
/**
* free_listint2 - frees a list and sets the head to null
* @head: pointer to the first node
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
	tmp = current;
	current = current->next;
	free(tmp);
	}

	*head = NULL;
}
