#include "lists.h"

/**
 * print_dlistint -> A function Prints all the elements of a dlistint_t list
 *@h: It's a Head List
 *Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int b;

	if (h == NULL)
	{
		return (0);
	}
	for (b = 0; h != NULL; b++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (b);
}
