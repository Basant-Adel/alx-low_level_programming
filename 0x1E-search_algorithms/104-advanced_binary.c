#include "search_algos.h"

/**
 * advbin -> A func to search for value in sorted array of int
 *@array: It's an array
 *@le: It's a left
 *@ri: It's a right
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

int advbin(int *array, int le, int ri, int value)
{
	int b, n;

	if (le > ri || le < 0)
	{
		return (-1);

	}	printf("Searching in array:");

	for (b = le; b <= ri; b++)
	{
		if (b == le)
			printf(" %d", array[b]);
		else
			printf(", %d", array[b]);

	}	printf("\n");
	n = (le + ri) / 2;

	if (array[n] == value)
	{
		if (array[n - 1] != value)
		{
			return (n);
		}
		else
		{
			return (advbin(array, le--, n, value));
		}
	}
	else if (array[n] < value)
		return (advbin(array, n + 1, ri, value));
	else
		return (advbin(array, le, n - 1, value));
}

/**
 * advanced_binary -> A func to search for value in sorted array of int
 *@array: It's an array
 *@size: It's a size
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{

		return (-1);

	}	return (advbin(array, 0, size - 1, value));
}
