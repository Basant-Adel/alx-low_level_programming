#include "main.h"
#include "4-main.c "

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: (1) if c is a letter, (0) otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'));
}
