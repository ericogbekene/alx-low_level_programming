#include "lists.h"

/**
* sum_listint - returns the sum of all the data of a list
* @head: pointer to the address of the first node
*
* Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
