#include "lists.h"

/**
* pop_listint - deletes the first node of a list and returns the data
* @head: pointer to head node
*
* Return: data in deleted node
*/

int pop_listint(listint_t **head)
{
	int content;
	listint_t *ptr;

	if (head == NULL || *head == NULL)
		return (0);

	content = (*head)->n;
	ptr = *head;
	*head = (*head)->next;
	free(ptr);

	return (content);
}
