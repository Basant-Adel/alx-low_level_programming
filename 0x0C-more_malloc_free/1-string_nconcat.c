#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - A function that concatenates two strings
 *@s1: Followed by the first (String)
 *@s2: Followed by the second (String)
 *@n: Is a greater or equal to the length of s2
 *Return: Pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int a, b, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;

	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		str[a] = s1[a];

	for (b = 0; b < n; b++)
	{
	str[a] = s2[b];
		a++;
	}

	str[a] = '\0';
	return (str);
}

