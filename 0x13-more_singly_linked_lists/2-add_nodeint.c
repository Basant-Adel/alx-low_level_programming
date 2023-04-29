#include "lists.h"

/**
 * *add_nodeint - A function that adds a new node at the beginning
 *of a listint_t list
 *@head: It's a pointer to the head of a node
 *@n: It's a new node
 *Return: The address of the new element, or (NULL) if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	
	if (!newnode)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
