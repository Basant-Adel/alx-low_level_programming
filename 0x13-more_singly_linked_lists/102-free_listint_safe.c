#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _ra - It's reallocates memory for array of pointers to node in linked list
 *
 *@list: The old list
 *@size: It's a size of the new list
 *@nl: It's a new node from list
 *Return: The new list
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *nl)
{
	listint_t **newlist;
	size_t b;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (b = 0; b < size - 1; b++)
		newlist[b] = list[b];
	newlist[b] = nl;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - A function that frees a listint_t list
 *This function can free lists with a loop
 *
 *@h: It's a pointer of the first node
 *Return: The size of the list that was free’d (func sets the head to NULL)
 */

size_t free_listint_safe(listint_t **h)
{
	size_t b, n_node = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (n_node);
	while (*head != NULL)
	{
		for (b = 0; b < n_node; b++)
		{
			if (*head == list[b])
			{
				*head = NULL;
				free(list);
				return (n_node);
			}
		}
		n_node++;
		list = _ra(list, n_node, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (n_node);
}
