#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - A function that returns a pointer
 *to a 2 dimensional array of integers
 *@width: Width of the matrix
 *@height: Height of the matrix
 *Return: Pointer to the created matrix (Successful) or NULL (Error)
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		arr[a] = (int *) malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			free(arr);
			for (b = 0; b <= a; b++)
				free(arr[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			arr[a][b] = 0;
		}
	}
	return (arr);
}
