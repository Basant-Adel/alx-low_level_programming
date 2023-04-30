#include "lists.h"

/**
 * add_nodeint_end - A function that adds a new node
 *at the end of a listint_t list
 *
 *@head: It's a pointer to the head of the node
 *@n: It's referring to the new node
 *Return: the address of the new element, or (NULL) if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *currentpointer, *temp;

	currentpointer = malloc(sizeof(listint_t));

	if (!currentpointer)
	{
		return (NULL);
	}
	currentpointer->n = n;
	currentpointer->next = NULL;

	if (!*head)
	{
		*head = currentpointer;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = currentpointer;
	}
	return (currentpointer);
}
