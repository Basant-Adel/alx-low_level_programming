#include "main.h"
/**
 *_strstr - The function finds the first occurrence
 *@haystack: The located substring (string)
 *@needle: The substring (string)
 *Return: Always 0 (Successful)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *y = haystack;
		char *x = needle;

		while (*y == *x && *x != '\0')
		{
			y++;
			x++;
		}

		if (*x == '\0')
			return (haystack);
	}

	return (0);
}
