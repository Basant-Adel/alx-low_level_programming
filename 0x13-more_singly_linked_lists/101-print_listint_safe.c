#include "lists.h"

/**
 * print_listint_safe - A function that prints a listint_t linked list
 *@head: It's a Pointer to the first node
 *Return: The number of nodes in the list (exit the program with status 98)
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *currentnode, *b;
	size_t counternode = 0;

	if (!head || !head->next)
	{
		return (0);
	}

	currentnode = head;
	while (currentnode)
	{
		printf("[%p] %d\n", (void *)currentnode, currentnode->n);
		counternode++;

		if (currentnode > currentnode->next)
		{
			currentnode = currentnode->next;
		}
		else
		{
			b = currentnode->next;
			printf("-> [%p] %d\n", (void *)b, b->n);
			break;
		}
	}
	return (counternode);
}
