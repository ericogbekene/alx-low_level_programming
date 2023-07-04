#include "lists.h"

/**
* list_len - returns the length of a list
* @h: pointer to the head node
*
* Return: number of nodes in a list
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	for (; h != NULL; count++)
{
	h = h->next;
}
return (count);
}
