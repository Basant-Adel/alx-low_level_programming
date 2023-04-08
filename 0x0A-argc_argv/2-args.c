#include <stdio.h>
#include "main.h"

/**
 *main - A program that prints all arguments it receives
 *@argc: The number of arguments (int)
 *@argv: An array of C-style strings (list)
 *Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
	{
		printf("%s\n", argv[b]);
	}

	return (0);
}
