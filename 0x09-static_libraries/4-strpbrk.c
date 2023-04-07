#include "main.h"
/**
 *_strpbrk - The function locates the first occurrence
 *@s: Enter string (bytes)
 *@accept: Enter in the string (bytes)
 *Return: Always 0 (Successful)
 */
char *_strpbrk(char *s, char *accept)
{
		int x;

		while (*s)
		{
			for (x = 0; accept[x]; x++)
			{
			if (*s == accept[x])
			return (s);
			}
		s++;
		}

	return ('\0');
}
