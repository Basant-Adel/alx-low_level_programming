#include "lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 *@head: It's a pointer to the head of the node
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *newnode;

	if (!head)
	{
		return;
	}
	while (*head)
	{
		newnode = (*head)->next;
		free(*head);
		*head = newnode;
	}
	head = NULL;
}
