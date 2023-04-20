#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - A function that prints numbers, followed by a new line
 *@separator: Separator (String)
 *@n: Number of arguments
 *@...: Integers to print
 *Return: Always 0 successful
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (a--)
		printf("%d%s", va_arg(ap, int),
			a ? (separator ? separator : "") : "\n");
	va_end(ap);
}
