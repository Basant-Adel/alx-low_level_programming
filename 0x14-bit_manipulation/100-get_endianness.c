#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 *Return: If big endian give 0, If little endian give 1
 */

int get_endianness(void)
{
	unsigned long int n = 1;

	return (*(char *)&n);
}
