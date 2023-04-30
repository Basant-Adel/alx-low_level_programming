#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 *@head: It's a pointer to the head of the node
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *headnode;

	while (head)
	{
		headnode = head;
		head = head->next;
		free(headnode);
	}
}
