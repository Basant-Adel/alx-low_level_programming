#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 *on each element of an array
 *@array: Array (int)
 *@size: Array of size
 *@action: A function (pointer)
 *Return: Nothing to return
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size  && action)
		while (array <= end)
			action(*array++);
}
