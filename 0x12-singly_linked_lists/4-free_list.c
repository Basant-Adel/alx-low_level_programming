#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 *@head: It's a pointer to the head node
 *
 *Return: Always 0 successful
 */

void free_list(list_t *head)
{
	list_t *new_node, *next_node;

	if (!head)
		return;

	new_node = head;
	while (new_node)
	{
		next_node = new_node->next;
		free(new_node->str);
		free(new_node);
		new_node = next_node;
	}
}
