#include "search_algos.h"

/**
 * linear_skip -> A func to search for value in sorted skip list of int
 *@list: It's a list
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *ba;

	if (list == NULL)
	{
		return (NULL);

	}	ba = list;

	do {
		list = ba;
		ba = ba->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)ba->index, ba->n);
	} while (ba->express && ba->n < value);

	if (ba->express == NULL)
	{
		list = ba;
		while (ba->next)
			ba = ba->next;

	}	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)ba->index);

	for (; list != ba->next; list = list->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);

		if (list->n == value)
			return (list);

	}	return (NULL);

}
