#include "hash_tables.h"

/**
 * hash_djb2 - Write A Hash Function implementing the djb2 algorithm
 *@str: It's a Hash Table Key
 *Return: It's a Hash Value
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
