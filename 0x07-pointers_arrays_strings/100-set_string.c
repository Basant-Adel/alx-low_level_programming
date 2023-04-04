#include "main.h"

/**
 *set_string - Switch the value of a pointer to a character
 *@s: The pointer to the pointer
 *@to: The pointer is a character
 *Return: Always 0 (Successful)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
