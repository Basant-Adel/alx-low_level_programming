#include "lists.h"

/**
 * insert_nodeint_at_index - A function that inserts a new node
 *at a given position
 *
 *@head: The address of pointer to first node
 *@idx: The index of the list where the new node should be added
 *@n: It's a value of new node
 *Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newn = malloc(sizeof(listint_t));
	unsigned int b = 0;

	if (!head || !newn)
		return (NULL);

	newn->n = n;
	newn->next = NULL;
	if (!idx)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}
	node = *head;
	while (node)
	{
		if (b == idx - 1)
		{
			newn->next = node->next;
			node->next = newn;
			return (newn);
		}
		b++;
		node = node->next;
	}
	free(newn);
	return (NULL);
}
