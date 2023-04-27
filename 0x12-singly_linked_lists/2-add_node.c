#include "lists.h"

/**
 * add_node - A function that adds a new node at the beginning
 *Of a list_t list
 *
 *@head: It's the address of pointer to head node
 *@str: Needs to be duplicated
 *
 *Return: The address of the new element,
 *Or (NULL) if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_new_one = malloc(sizeof(list_t));

	if (!head || !add_new_one)
		return (NULL);

	if (str)
	{
		add_new_one->str = strdup(str);

		if (!add_new_one->str)
		{
			free(add_new_one);
			return (NULL);
		}
		add_new_one->len = _strlen(add_new_one->str);
	}

	add_new_one->next = *head;
	*head = add_new_one;
	return (add_new_one);
}
