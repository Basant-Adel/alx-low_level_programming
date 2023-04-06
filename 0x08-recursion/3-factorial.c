#include "main.h"
/**
 *factorial - It is a function that returns the factorial of a given number
 *@n: It is a number to return the factorial from
 *Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
