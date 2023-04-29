#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 *in a linked listint_t list
 *
 *@h: It's a Points to the head of a node
 *Return: The number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t collect = 0;

	while (h)
	{
		collect++;
		h = h->next;
	}
	return (collect);
}
