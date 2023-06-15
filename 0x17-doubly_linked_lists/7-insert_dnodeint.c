#include "lists.h"

/**
 * insert_dnodeint_at_index -> To Inserts a new node at a given position
 *@h: It's a Head List
 *@idx: It's a Index Node
 *@n: It's a Add Number
 *Return: The address of the new node, (NULL)-> if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *x, *y, *newnode;
	unsigned int z;

	if (h == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	x = *h;
	for (z = 0; z < idx - 1; z++)
	{
		if (x == NULL)
		{
			return (NULL);
		}
		x = x->next;
	}
	if (x == NULL)
	{
		return (NULL);
	}
	if (x->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	y = x->next;
	x->next = newnode;
	newnode->prev = x;
	newnode->next = y;
	y->prev = newnode;
	newnode->n = n;
	return (newnode);
}
