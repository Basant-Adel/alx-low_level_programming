#include "search_algos.h"

/**
 * interpolation_search -> A func to search for value in sorted array of int
 *@array: It's an array
 *@size: It's a size
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (array == NULL)
	{
		return (-1);

	}	low = 0;
	high = size - 1;

	while ((array[high] != array[low]) && (value >= array[low]) &&
		   (value <= array[high]))
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
		{
			low = pos + 1;
		}

		else if (value < array[pos])
		{
			high = pos - 1;
		}

		else
		{
			return (pos);
		}

	}	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
