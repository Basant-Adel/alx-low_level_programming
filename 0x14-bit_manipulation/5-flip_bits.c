#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need to
 *flip to get from one number to another
 *
 *@n: The first number
 *@m: The second number
 *Return: It's a number of bits to flip to convert numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int bina = 0;

	while (xorval)
	{
		if (xorval & 1ul)
		{
			bina++;
		}
		xorval = xorval >> 1;
	}
	return (bina);
}
