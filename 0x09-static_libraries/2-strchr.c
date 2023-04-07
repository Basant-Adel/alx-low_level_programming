#include "main.h"
/**
 *_strchr - The function returns a pointer to the first occurrence
 *@s: Enter character (string) in the first occurrence
 *@c: character (string)
 *Return: Always 0 (Successful)
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
