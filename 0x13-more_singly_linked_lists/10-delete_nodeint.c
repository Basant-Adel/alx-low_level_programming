#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node
 *at index index of a listint_t linked list
 *
 *@head: The pointer of the first of node
 *@index: The index of the node that should be deleted
 *Return: (1) If It Successful, (-1) If It Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new_node, *current_node;
	unsigned int b;

	if (!(*head))
	{
		return (-1);
	}

	if (index == 0)
	{
		new_node = *head;
		*head = (*head)->next;
		free(new_node);
		return (1);
	}

	current_node = *head;

	for (b = 0; b < (index - 1); b++)
	{
		if (!current_node->next)
		{
			return (-1);
		}
		current_node = current_node->next;
	}

	new_node = current_node->next;
	current_node->next = new_node->next;
	free(new_node);
	return (1);
}
