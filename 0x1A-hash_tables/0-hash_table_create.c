#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the array
 *
 * Return: pointer to a newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;

	hash_table_t *my_table = malloc(sizeof(hash_table_t));

	if (my_table == NULL)
		return (NULL);

	my_table->size = size;
	my_table->array = malloc(sizeof(hash_node_t *) * size);

	if (my_table->array == NULL)
	{
		free(my_table);
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		my_table->array[j] = NULL;
	}
	return (my_table);
}
