#include "lists.h"

/**
 * sum_listint - sums the n elements of the data of a linked list
 * @head: pointer to the first node of the list
 *
 * Return: sum of all the data parts
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
