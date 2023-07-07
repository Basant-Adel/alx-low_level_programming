#include "hash_tables.h"

/**
 * hash_table_get - Write a function that retrieves
 *a value associated with a key
 *
 *@ht: It's a Hash Table
 *@key: It's a Hash Table
 *Return: Depend Condition
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *temp = NULL;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{

		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}

		temp = temp->next;
	}

	return (NULL);
}
