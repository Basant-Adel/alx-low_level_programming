#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *argstostr - A function that concatenates all arguments of the program
  *@ac: Argument count
  *@av: Pointer to array of size ac
  *Return: NULL if ac == 0 or av == null, Pointer to new string (NULL on fail)
  */

char *argstostr(int ac, char **av)
{
	int x, y, b, size;
	char *arg;

	size = 0;
	b = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			size++;
			y++;
		}
		size++;
		x++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		y = 0;
		while (av[x][y])
		{
			arg[b] = av[x][y];
			y++;
			b++;
		}
		arg[b] = '\n';
		b++;
		x++;
	}
	arg[b] = '\0';
	return (arg);
}
