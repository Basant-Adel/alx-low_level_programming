#include "lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list
 *@head: It's a address of pointer to the first node
 *Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *newnode = NULL, *next = NULL;

	if (!head || !*head)
	{
		return (NULL);
	}

	newnode = *head;
	*head = NULL;

	while (newnode)
	{
		next = newnode->next;
		newnode->next = *head;
		*head = newnode;
		newnode = next;
	}
	return (*head);
}
