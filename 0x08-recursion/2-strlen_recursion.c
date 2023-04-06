#include "main.h"
/**
 *_strlen_recursion - Returns the length of a string
 *@s: The string that length you want to measure
 *Return: The length (string)
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
