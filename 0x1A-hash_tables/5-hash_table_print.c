#include "hash_tables.h"

/**
 * hash_table_print - function to print a hash table
 * @ht: pointer to the hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int count = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current_node = ht->array[i];

		while (current_node != NULL)
		{
			if (count)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			count = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
