#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
 *_sqrt_recursion - Returns the natural square root of a number
 *@n: Number to calculate the square root of
 *Return: The resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 *actual_sqrt_recursion - We recurse it to find the natural square
 *@n: Number to calculate the square root of
 *@m: Repeated
 *Return: The result of the square root
 */

int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}
