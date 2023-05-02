#include "lists.h"

/**
 * print_listint_safe - A function that prints a listint_t linked list
 *@head: It's a Pointer to the first node
 *Return: The number of nodes in the list (exit the program with status 98)
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *newnode, *b;
	size_t counter = 0;

	if (!head || !head->next)
	{
		return (0);
	}

	newnode = head;
	while (newnode)
	{
		printf("[%p] %d\n", (void *)newnode, newnode->n);
		counter++;

		if (newnode > newnode->next)
		{
			newnode = newnode->next;
		}
		else
		{
			b = newnode->next;
			printf("-> [%p] %d\n", (void *)b, b->n);
			break;
		}
	}
	return (counter);
}
