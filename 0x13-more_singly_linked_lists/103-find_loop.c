#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list
 * @head: List to search
 * Return: The address of the node where loop starts, or NULL if is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *point, *endnode;

	if (head == NULL)
		return (NULL);
	for (endnode = head->next; endnode != NULL; endnode = endnode->next)
	{
		if (endnode == endnode->next)
			return (endnode);
		for (point = head; point != endnode; point = point->next)
			if (point == endnode->next)
				return (endnode->next);
	}

	return (NULL);
}
