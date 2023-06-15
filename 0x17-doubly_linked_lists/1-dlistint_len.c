#include "lists.h"

/**
 * dlistint_len -> To Returns number of elements in a linked dlistint_t list
 *@h: It's a Head List
 *Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int b;

	if (h == NULL)
	{
		return (0);
	}
	for (b = 0; h != NULL; b++)
	{
		h = h->next;
	}
	return (b);
}
