#include "lists.h"

/**
 * free_listint - frees a singly linked list
 * @head: pointer to the first node of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current = NULL;

	if (head == NULL)
	{
		return;
	}

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
