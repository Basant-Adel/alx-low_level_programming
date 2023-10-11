#include "search_algos.h"
#include <math.h>

/**
 * jump_search -> A function that searches for value in sorted array of int
 *@array: It's an array
 *@size: It's a size
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

int jump_search(int *array, size_t size, int value)
{
	size_t b, s, a, n;

	if (array == NULL)
	{
		return (-1);

	}	b = 0;

	a = sqrt(size);
	s = a;

	while (1)
	{
		printf("Value checked array[%ld] = [%d]\n", b, array[b]);

		if (s >= size || array[s] >= value)
		{
			break;
		}

		else if (array[s] < value)
		{
			b = s;
			s += a;
		}

	}	printf("Value found between indexes [%ld] and [%ld]\n", b, s);

	for (n = b; n < size && n <= s; n++)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);

		if (array[n] == value)
			return (n);

	}	return (-1);
}
