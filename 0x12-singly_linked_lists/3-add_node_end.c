#include "lists.h"

/**
 * add_node_end - A function that adds a new node
 *At the end of a (list_t) list
 *
 *@head: It's address of pointer to head node
 *@str: Needs to be duplicated
 *
 *Return: The address of the new element,
 *OR (NULL) if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_new_node = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !add_new_node)
		return (NULL);

	if (str)
	{
		add_new_node->str = strdup(str);

		if (!add_new_node->str)
		{
			free(add_new_node);
			return (NULL);
		}
		add_new_node->len = _strlen(add_new_node->str);
	}

	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = add_new_node;
	}
	else
		*head = add_new_node;
	return (add_new_node);
}
