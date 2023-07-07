#include "hash_tables.h"

/**
 * hash_table_print - Write a function that prints a hash table
 *@ht: It's a Hash Table
 *Return: Depend Condition
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int b = 0;
	hash_node_t *temp = NULL;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	for (b = 0; b < ht->size; b++)
	{

		temp = ht->array[b];

		while (temp != NULL)
		{

			if (flag == 1)
			{
				printf(", ");
			}

			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}

	printf("}\n");
}
