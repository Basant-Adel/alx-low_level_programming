#include "hash_tables.h"

/**
 * hash_table_delete - Write a function that deletes a hash table
 *@ht: It's a Hash Table
 *Return: Depend Condition
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int b = 0;
	hash_node_t *temp = NULL, *temp2 = NULL;

	if (ht == NULL)
	{
		return;
	}

	for (b = 0; b < ht->size; b++)
	{

		temp = ht->array[b];

		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp->key);
			free(temp->value);
			free(temp);
			temp = temp2;
		}
	}

	free(ht->array);
	free(ht);

}
