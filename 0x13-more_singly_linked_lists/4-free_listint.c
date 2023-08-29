#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *current = NULL;

	if (head == NULL)
	{
		return ;
	}
/**
	if (head->next == NULL)
		free(head);
*/
	else
	{
		current = head;

		while (head != NULL)
		{
			current = head;
			head = head->next;
			free(current);
		}
		/*free(current);*/
	}
}
