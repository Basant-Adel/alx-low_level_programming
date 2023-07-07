#include "hash_tables.h"

/**
 *hash_table_create - A function that creates a Hash Table
 *@size: It's an Array
 *Return: A pointer to the newly created Hash Table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *n_hash = NULL;
	unsigned long int b = 0;

	n_hash = malloc(sizeof(hash_table_t));

	if (n_hash == NULL)
	{
		return (NULL);
	}

	n_hash->size = size;
	n_hash->array = malloc(sizeof(hash_node_t *) * size);

	if (n_hash->array == NULL)
	{
		free(n_hash);
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		n_hash->array[b] = NULL;
	}

	return (n_hash);
}
