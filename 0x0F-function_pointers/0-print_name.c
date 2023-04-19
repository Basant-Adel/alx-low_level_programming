#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 *@name: The name (String)
 *@f: The printing function
 *Return: Nothing to return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
