#include <stdio.h>
#include "main.h"

/**
 *main - A program that prints the number of arguments passed into it
 *@argc: The number of arguments (int)
 *@argv: An array of C-style strings (list)
 *Return: Always 0 (Successful)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
