#include "lists.h"

/**
 * delete_dnodeint_at_index -> To Deletes node at index dlistint_t linked list
 *@head: It's a Head List
 *@index: It's a Index Node
 *Return: (1)-> if it succeeded (-1)-> if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int z;
	dlistint_t *x, *y;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	x = *head;

	if (index == 0)
	{
		*head = x->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(x);
		return (1);
	}
	for (z = 0; z < index; z++)
	{
		if (x == NULL)
		{
			return (-1);
		}
		y = x;
		x = x->next;
	}
	y->next = x->next;

	if (x->next != NULL)
	{
		x->next->prev = y;
	}
	free(x);
	return (1);
}
