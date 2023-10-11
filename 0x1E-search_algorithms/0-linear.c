#include "search_algos.h"

/**
 * linear_search -> A function that searches for value in array of int
 *@array: It's an array
 *@size: It's a size
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

int linear_search(int *array, size_t size, int value)
{
	int b;

	if (array == NULL)
	{
		return (-1);
	}

	for (b = 0; b < (int)size; b++)
	{

		printf("Value checked array[%u] = [%d]\n", b, array[b]);

		if (value == array[b])
		{
			return (b);
		}

	}	return (-1);
}
