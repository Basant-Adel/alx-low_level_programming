#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - A function that returns a pointer
 *to a newly allocated space in memory
 *which contains a copy of the string given as a parameter
 *
 *@str: String
 *Return: 0 (Successful)
 */

char *_strdup(char *str)
{
	int b = 0, size = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
		a = malloc(size * sizeof(*str) + 1);

	if (a == 0)
		return (NULL);

	else
	{
		for (; b < size; b++)
			a[b] = str[b];
	}
	return (a);
}
