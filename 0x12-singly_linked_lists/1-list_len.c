#include "lists.h"

/**
 * list_len - A function that returns the number of
 *Elements in a linked list_t list
 *
 *@h: It's a pointer to the first node
 *Return: Size of list (The number of nodes)
 */

size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		h = h->next;
		b++;
	}
	return (b);
}
