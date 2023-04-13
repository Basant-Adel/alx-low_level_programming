#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *array_range - A function that creates an array of integers
 *@min: Min number of elements
 *@max: Max number of elements
 *Return: Array pointer address, NULL if it fails
 */

int *array_range(int min, int max)
{
	int b, *array;

	if (min > max)
		return (NULL);

	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (b = 0; min <= max; b++)
	{
		array[b] = min;
		min++;
	}
	return (array);
}
