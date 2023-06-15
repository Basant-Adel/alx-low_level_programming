#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 *@head: It's a dlistint_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *dlist;

	while (head)
	{
		dlist = head;
		head = head->next;
		free(dlist);
	}
}
