#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *temp = NULL;

	if (*head == NULL)
		return (0);

	else
	{
		temp = *head;

		return (temp->n);
		temp = temp->next;
		free(head); /*code to delete the node*/
		*head = temp; /*point head to next node which is now temp*/

	}
}
