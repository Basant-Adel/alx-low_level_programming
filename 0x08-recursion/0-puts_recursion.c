#include "main.h"
/**
 *_puts_recursion - It is a function like "puts();"
 *@s: Enter string to print
 *Return: Always 0 (Successful)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
