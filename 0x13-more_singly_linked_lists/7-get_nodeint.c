#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node
 *of a listint_t linked list
 *
 *@head: It's a Pointer to first node
 *@index: The index of the node, starting at (0)
 *Return: (NULL) If the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;

	for (b = 0; b < index; b++)
	{
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
