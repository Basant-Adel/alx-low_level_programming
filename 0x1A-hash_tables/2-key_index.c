#include "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key
 *@key: It's a Hash Table
 *@size: It's a Hash Table
 *
 *Return: the index at which the key/value pair
 *should be stored in the array of the hash table
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_ind = hash_djb2(key) % size;


	return (key_ind);
}
