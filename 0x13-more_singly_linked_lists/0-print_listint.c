#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list
 *@h: It's a pointer to the first node
 *Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t collect = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		collect++;
	}
	return (collect);
}
