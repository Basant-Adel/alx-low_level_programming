#include "search_algos.h"
#include <math.h>

/**
 * jump_list -> A function that searches for value in sorted list of int
 *@list: It's a list
 *@size: It's a size
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t b, z;
	listint_t *x, *r;

	if (list == NULL || size == 0)
	{
		return (NULL);

	}	x = list;
	b = sqrt(size);
	r = x;

	while (1)
	{
		for (z = 0; z < b && r; z++)
		{
			if (r->next)
				r = r->next;

		}		printf("Value checked at index [%ld] = [%d]\n", r->index, r->n);

		if (r->index == size - 1 || r->n >= value)
			break;

		else if (r->n < value)
			x = r;

	}	printf("Value found between indexes [%ld] and [%ld]\n", x->index, r->index);

	while (1)
	{
		printf("Value checked at index [%ld] = [%d]\n", x->index, x->n);

		if (x->n == value)
			return (x);
		if (r == x)
			break;
		if (x->next)
			x = x->next;
	}	return (NULL);
}
