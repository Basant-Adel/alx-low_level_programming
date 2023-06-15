#include "lists.h"

/**
 * add_dnodeint_end -> To Adds a new node at the end of a dlistint_t list
 *@head: It's a Head List
 *@n: It's a Add Number
 *Return: The address of the new element, (NULL)-> if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *b;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (*head != NULL)
	{
		b = *head;
		while (b->next != NULL)
			b = b->next;
		b->next = newnode;
		newnode->prev = b;
	}
	else
	{
		*head = newnode;
	}
	return (newnode);
}
