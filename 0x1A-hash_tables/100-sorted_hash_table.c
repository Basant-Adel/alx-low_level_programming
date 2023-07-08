#include "hash_tables.h"

/**
 * shash_table_create - A function to create Hash Table
 *@size: size of the hash table
 *Return: Depend Condition
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *n_table;
	unsigned long int b;

	n_table = malloc(sizeof(shash_table_t));

	if (n_table == NULL)
	{
		return (NULL);
	}

	n_table->size = size;
	n_table->shead = NULL;
	n_table->stail = NULL;
	n_table->array = malloc(sizeof(shash_node_t) * size);

	if (n_table->array == NULL)
	{
		free(n_table);
		return (NULL);
	}

	for (b = 0; b < size; b++)
	{
		n_table->array[b] = NULL;
	}

	return (n_table);
}

/**
 * make_shash_node - A function to create Hash Table
 *@key: It's a hash table
 *@value: It's a hash table
 *Return: Depend Condition
 */

shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->key = strdup(key);

	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);

	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = node->snext = node->sprev = NULL;
	return (node);
}

/**
 * add_to_sorted_list - A function to create Hash Table
 *@table: It's a hash table
 *@node: It's a hash table
 *Return: Depend Condition (Void)
 */

void add_to_sorted_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *next;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}
	next = table->shead;

	while (next != NULL)
	{
		if (strcmp(node->key, next->key) < 0)
		{
			node->snext = next;
			node->sprev = next->sprev;
			next->sprev = node;

			if (node->sprev != NULL)
			{
				node->sprev->snext = node;
			}
			else
			{
				table->shead = node;
			}
			return;
		}
		next = next->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}

/**
 * shash_table_set - sets a key to a value in the hash table
 *@ht: It's a hash table
 *@key: It's a hash table
 *@value: It's a hash table
 *Return: Depend Condition
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int b;
	char *new_v;
	shash_node_t *node, *next;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	b = key_index((const unsigned char *)key, ht->size);
	next = ht->array[b];

	while (next != NULL)
	{
		if (strcmp(next->key, key) == 0)
		{
			new_v = strdup(value);
			if (new_v == NULL)
			{
				return (0);
			}
			free(next->value);
			next->value = new_v;
			return (1);
		}
		next = next->next;
	}
	node = make_shash_node(key, value);
	if (node == NULL)
	{
		return (0);
	}
	node->next = ht->array[b];
	ht->array[b] = node;
	add_to_sorted_list(ht, node);
	return (1);
}

/**
 * shash_table_get - retrieve a value from the hash table
 *@ht: It's a hash table
 *@key: It's a hash table
 *Return: Depend Condition
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int b;
	shash_node_t *n;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
	{
		return (NULL);
	}

	b = key_index((const unsigned char *)key, ht->size);
	n = ht->array[b];

	while (n != NULL)
	{

		if (strcmp(n->key, key) == 0)
		{
			return (n->value);
		}

		n = n->next;

	}

	return (NULL);
}

/**
 * shash_table_print - prints a sorted hash table
 *@ht: It's a Hash table
 *Return: Depend Condition (Void)
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	tmp = ht->shead;

	while (tmp != NULL)
	{

		if (flag == 1)
		{
			printf(", ");
		}

		printf("'%s': '%s'", tmp->key, tmp->value);
		flag = 1;
		tmp = tmp->snext;

	}

	printf("}\n");

}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 *@ht: It's a Hash table
 *Return: Depend Condition (Void)
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *next;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	printf("{");
	next = ht->stail;

	while (next != NULL)
	{

		if (flag == 1)
		{
			printf(", ");
		}

		printf("'%s': '%s'", next->key, next->value);
		flag = 1;
		next = next->sprev;

	}

	printf("}\n");

}

/**
 * shash_table_delete - deletes a sorted hash table
 *@ht: It's a hash table
 *Return: Depend Condition (Void)
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int b;
	shash_node_t *next_n;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
	{
		return;
	}

	for (b = 0; b < ht->size; b++)
	{

		while (ht->array[b] != NULL)
		{
			next_n = ht->array[b]->next;
			free(ht->array[b]->key);
			free(ht->array[b]->value);
			free(ht->array[b]);
			ht->array[b] = next_n;
		}

	}

	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);

}
