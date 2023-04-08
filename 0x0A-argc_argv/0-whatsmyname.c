#include <stdio.h>
#include "main.h"

/**
 *main - A program that prints its name, followed by a new line
 *@argc: The number of arguments (int)
 *@argv: An array of C-style strings (list)
 *Return: Always 0 (Successful)
 */

int main(int argc, char const *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
