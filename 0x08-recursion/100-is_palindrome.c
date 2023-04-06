#include "main.h"

int check_pal(char *s, int x, int len);
int _strlen_recursion(char *s);

/**
 *is_palindrome - It checks if a string is a palindrome
 *@s: A string to reverse
 *Return: 1 if it is, 0 it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - Returns the length of a string
 *@s: A string to calculate the length of
 *Return: The Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 *check_pal - It checks the characters recursively for palindrome
 *@s: It is a string to check
 *@x: Repeated
 *@len: The length of the string
 *Return: 1 if palindrome, 0 if not
 */
int check_pal(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);
	return (check_pal(s, x + 1, len - 1));
}
