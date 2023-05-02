#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list
 *This function can free lists with a loop
 *
 *@h: It's a pointer of the first node
 *Return: The size of the list that was free’d (func sets the head to NULL)
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *currentnode = *h, *node;
	size_t counter = 0;

	if (!h || !*h)
	{
		return (counter);
	}

	while (currentnode)
	{
		node = currentnode;
		currentnode = currentnode->next;

		if (currentnode <= currentnode->next)
		{
			*h = NULL;
			counter++;
			break;
		}

		node = currentnode->next;
		currentnode->next = NULL;
		free(currentnode);
		currentnode = node;
		counter++;
	}
	*h = NULL;
	return (counter);
}
