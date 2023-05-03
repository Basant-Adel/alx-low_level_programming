#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop_fl - Find a loop in a list
 *@head: List to search
 *Return: It's a address of node where loop starts, return (NULL)
 */

listint_t *find_listint_loop_fl(listint_t *head)
{
	listint_t *pointer, *endnode;

	if (head == NULL)
		return (NULL);

	for (endnode = head->next; endnode != NULL; endnode = endnode->next)
	{
		if (endnode == endnode->next)
			return (endnode);
		for (pointer = head; pointer != endnode; pointer = pointer->next)
			if (pointer == endnode->next)
				return (endnode->next);
	}
	return (NULL);
}

/**
 * free_listint_safe - A function that frees a listint_t list
 *(can free lists with a loop)
 *
 *@h: The head of list
 *Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *lnode;
	size_t len_node;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	lnode = find_listint_loop_fl(*h);
	for (len_node = 0; (*h != lnode || loop) && *h != NULL; *h = next)
	{
		len_node++;
		next = (*h)->next;
		if (*h == lnode && loop)
		{
			if (lnode == lnode->next)
			{
				free(*h);
				break;
			}
			len_node++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len_node);
}
