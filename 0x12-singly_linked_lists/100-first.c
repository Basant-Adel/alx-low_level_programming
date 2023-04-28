#include "lists.h"

void _constructor(void) __attribute__ ((constructor));

/**
 * _constructor - A function that prints You're beat!
 *and yet, you must allow,\nI bore my house upon my back!\n
 *before the main function is executed.
 *
 *Return: void
 */

void _constructor(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
