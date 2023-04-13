#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_memset - Fills memory with a constant byte
 *@a: Pointer to put the constant
 *@b: Constant
 *@c: Max bytes to use
 *Return: A pointer to the allocated memory (a)
 */

char *_memset(char *a, char b, unsigned int c)
{
	char *ptr = a;

	while (c--)
		*a++ = b;
	return (ptr);
}

/**
 * *_calloc - A function that allocates memory for an array, using malloc
 *@nmemb: Array length
 *@size: Size of each element
 *Return: A pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *x;

	if (size == 0 || nmemb == 0)
		return (NULL);
	x = malloc(sizeof(int) * nmemb);

	if (x == 0)
		return (NULL);

	_memset(x, 0, sizeof(int) * nmemb);

	return (x);
}
