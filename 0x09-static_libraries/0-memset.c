#include "main.h"

/**
 *  _memset - Fill in part of the value memory
 * @n: The number of bytes to change
 * @b: Desired value
 * @s: Beginning of the memory address to be filled
 * finally we Return a pointer to the memory area s
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

