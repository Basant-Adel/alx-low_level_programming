#include "lists.h"

/**
 * sum_listint - A function that returns the sum
 *of all the data (n) of a listint_t linked list
 *
 *@head: It'S a pointer to first node
 *Return: (0) If the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* It sums up the node starting from the head, then the next node */
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
