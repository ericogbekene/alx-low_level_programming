#include "lists.h"

void free_list(list_t *head)
{
	/*list_t *current;*/

	/*current = head;*/

	if (head == NULL)
		free(head);

	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
	free(head);
}
