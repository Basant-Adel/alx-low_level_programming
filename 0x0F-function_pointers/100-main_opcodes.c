#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function
 *@argc: Args (Number)
 *@argv: Argument
 *Return: Always 0 successful
 */

int main(int argc, char **argv)
{
	char *x = (char *)main;
	int z;

	if (argc != 2)
		printf("Error\n"), exit(1);
	z = atoi(argv[1]);
	if (z < 0)
		printf("Error\n"), exit(2);

	while (z--)
		printf("%02hhx%s", *x++, z ? " " :  "\n");
	return (0);
}
