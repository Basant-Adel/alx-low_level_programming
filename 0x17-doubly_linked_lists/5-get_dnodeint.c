#include "lists.h"

/**
 * get_dnodeint_at_index -> To Returns nth node of a dlistint_t linked list
 *@head: It's a Head List
 *@index: It's a Index Node
 *Return: (NULL)-> if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int b;
	dlistint_t *h;

	if (head == NULL)
	{
		return (NULL);
	}
	h = head;
	for (b = 0; b < index; b++)
	{
		if (h == NULL)
		{
			return (NULL);
		}
		h = h->next;
	}
	return (h);
}
