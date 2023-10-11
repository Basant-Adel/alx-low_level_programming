#include "search_algos.h"

/**
 * binary_search -> A function that searches for value in sorted array of int
 *@array: It's an array
 *@size: It's a size
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t b, n, h, a;

	b = 0;
	n = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (b <= n)
	{
		printf("Searching in array:");

		for (a = b; a <= n; a++)
		{
			if (a == b)
				printf(" %d", array[a]);
			else
			{
				printf(", %d", array[a]);
			}

		}		printf("\n");
		h = (b + n) / 2;

		if (array[h] < value)
			b = h + 1;

		else if (array[h] > value)
			n = h - 1;

		else
			return (h);

	}	return (-1);
}
