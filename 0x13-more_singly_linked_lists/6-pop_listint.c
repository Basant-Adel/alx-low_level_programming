#include "lists.h"

/**
 * pop_listint - A function that deletes the head node
 *of a listint_t linked list, and returns the head node’s data (n)
 *
 *@head: It's a pointer to the head of the node
 *Return: If the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int n;

	if (!*head)
	{
		return (0);
	}

	newnode = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = newnode;
	return (n);
}
