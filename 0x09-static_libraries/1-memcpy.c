#include "main.h"
/**
 *_memcpy - A function copies 'n'
 *@n: Number of bytes from memory
 *@src: Memory area that is copied
 *@dest: Memory that is stored
 *
 *Return: 'dest'
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int v = 0;
	int x = n;

	for (; v < x; v++)
	{
		dest[v] = src[v];
		n--;
	}
	return (dest);
}
