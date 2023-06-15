#include "lists.h"

/**
 * sum_dlistint -> To Returns the sum of all the n a dlistint_t linked list
 *@head:It's a Head List
 *Return: (0)-> if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum_dlist = 0;

	if (head == NULL)
	{
		return (0);
	}
	for (; head != NULL; head = head->next)
	{
		sum_dlist += head->n;
	}
	return (sum_dlist);
}
