#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 *main - A program that adds positive numbers
 *@argc: The number of arguments (int)
 *@argv: An array of C-style strings (list)
 *Return: 0 (Successful), 1 (Return Error)
 */

int main(int argc, char *argv[])
{
	int b, a, sum;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (b = 1; b < argc; b++)
	{
		for (a = 0; argv[b][a] != '\0'; a++)
		{
			if (!isdigit(argv[b][a]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[b]);
	}
	printf("%d\n", sum);
	return (0);
}
