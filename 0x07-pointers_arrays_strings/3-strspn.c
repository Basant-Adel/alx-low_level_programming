#include "main.h"
/**
 *_strspn - The function that gets the length
 *@s: Enter number of bytes
 *@accept: Consist only of bytes
 *Return: Always 0 (Successful)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int y = 0;
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				y++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
