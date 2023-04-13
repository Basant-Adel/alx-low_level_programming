#include "main.h"

/**
 * *malloc_checked - A function that allocates memory using malloc
 *@b: Integer (int)
 *Return: A pointer to the allocated memory or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *a = malloc(b);

	if (a == 0)
		exit(98);

	return (a);
}
