#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Afunction that returns the sum of all its parameters
 *@n: Number of arguments
 *@...: Integers to sum
 *Return: Sum (int)
 */

int sum_them_all(const unsigned int n, ...)
{
	int a = 0, h = n;
	va_list ap;

	if (!n)
		return (0);
	va_start(ap, n);
	while (h--)
		a += va_arg(ap, int);
	va_end(ap);
	return (a);
}
