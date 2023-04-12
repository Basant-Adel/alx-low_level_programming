#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - Helper function to count the number of words in a string
 *@s: String to evaluate
 *Return: Number of words
 */

int count_word(char *s)
{
	int flag, x, z;

	flag = 0;
	z = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}

	return (z);
}

/**
 * **strtow - A function that Splits a string into words
 * @str: String to split
 *Return: pointer to an array of strings (Successful) or NULL (Error)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int a, d = 0, len = 0, words, x = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (a = 0; a <= len; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (x)
			{
				end = a;
				tmp = (char *) malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[d] = tmp - x;
				d++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = a;
	}

	matrix[d] = NULL;

	return (matrix);
}
