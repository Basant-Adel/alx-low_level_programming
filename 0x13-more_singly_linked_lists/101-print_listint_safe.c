#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _r - It's reallocates memory for array of pointers to node in linked list
 *
 *@list: The old list
 *@size: It's a size of the new list
 *@nl: It's a new node from list
 *Return: The new list
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *nl)
{
	const listint_t **new_l;
	size_t b;

	new_l = malloc(size * sizeof(listint_t *));

	if (new_l == NULL)
	{
		free(list);
		exit(98);
	}

	for (b = 0; b < size - 1; b++)
		new_l[b] = list[b];
	new_l[b] = nl;
	free(list);
	return (new_l);
}

/**
 * print_listint_safe - A function that prints a listint_t linked list
 *@head: It's a Pointer to the first node
 *Return: The number of nodes in the list (exit the program with status 98)
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t b, newnode = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (b = 0; b < newnode; b++)
		{

			if (head == list[b])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (newnode);
			}
		}
		newnode++;
		list = _r(list, newnode, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (newnode);
}
