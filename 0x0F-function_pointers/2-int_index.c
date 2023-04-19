#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 *@array: Array (int)
 *@size: The array size
 *@cmp: A function (compare)
 *Return: Integer index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int b = 0;

	if (array && size && cmp)
		while (b < size)
		{
			if (cmp(array[b]))
				return (b);
			b++;
		}
	return (-1);
}
