#include "search_algos.h"

/**
 * advbin -> A func to search for value in sorted array of int
 *@array: It's an array
 *@size: It's a size
 *@value: It's a value
 *Return: Always -> (EXIT_SUCCESS) || array = (NULL) -> (-1)
 */

int advbin(int *array, size_t size, int value)
{
	size_t fl = size / 2;
	size_t q = 0;

	if (array == NULL || size == 0)
	{
		return (-1);

	}	printf("Searching in array");

	while (q < size)
	{

		printf("%s %d", (q == 0) ? ":" : ",", array[q]);
		q++;

	}	printf("\n");

	if (fl && size % 2 == 0)
		fl--;

	if (value == array[fl])
	{
		if (fl > 0)
		{
			return (advbin(array, fl + 1, value));

		}	return ((int)fl);
	}

	if (value < array[fl])
	{
		return (advbin(array, fl + 1, value));

	}	fl++;
	return (advbin(array + fl, size - fl, value) + fl);
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
	int ex;

	ex = advbin(array, size, value);

	if (ex >= 0 && array[ex] != value)
	{
		return (-1);
	}

	return (ex);
}
