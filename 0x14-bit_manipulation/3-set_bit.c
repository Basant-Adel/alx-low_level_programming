#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 *@n: The number
 *@index: The bit
 *Return: 1 if it worked successful, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return (!!(*n |= 1L << index));
}
