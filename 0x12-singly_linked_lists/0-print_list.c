#include "lists.h"

/**
 * _strlen - Returns the length of a string
 *@b: The length of a string
 *Return: Integer length of string
 */

int _strlen(char *b)
{
	int i = 0;

	if (!b)
		return (0);
	while (*b++)
		i++;
	return (i);
}

/**
 * print_list - A function that prints all the elements of a list_t list
 *@h: It's a pointer to the first node
 *Return: Size of list (The number of nodes)
 */

size_t print_list(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		b++;
	}
	return (b);
}
