#include "hash_tables.h"

/**
 * hash_table_delete - function to delete a hash table
 * @ht: pointer to the hash table to delete.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current, *temp;

	if (ht == NULL)
		return;

	for (; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
