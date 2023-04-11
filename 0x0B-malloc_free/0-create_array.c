#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - A function that Creates an array of chars
 * and initializes it with a specific char
 *
 *@c: char to initialize
 *@size: size of the array
 *Return: Pointer to the array initialized or NULL (return NULL (size = 0))
 */

char *create_array(unsigned int size, char c)
{
	char *b = malloc(size);

	if (size == 0 || b == 0)
		return (0);

	while (size--)
		b[size] = c;
	return (b);
}
