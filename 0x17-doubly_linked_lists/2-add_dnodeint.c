#include "lists.h"

/**
 * add_dnodeint -> To Adds a new node at the beginning of a dlistint_t list
 *@head: It's a Head List
 *@n: It's a Add Number
 *Return: The address of the new element, (NULL)-> if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

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
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (newnode);
}
