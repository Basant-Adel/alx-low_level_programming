#include "main.h"

/**
 * binary_to_uint - A function that converts a binary num to an unsigned int
 *@b: Where is pointing to a string of 0 and 1 chars
 *Return: the converted number, or 0 if(b is NULL)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bina = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		bina = bina * 2 + (*b++ - '0');
	}
	return (bina);
}
