#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	char *a;
	unsigned int b, len;

	b = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	a = malloc(sizeof(char) * (len + 1));

	if (a == NULL)
		return (NULL);

	while ((a[b] = str[b]) != '\0')
		b++;

	return (a);
}
