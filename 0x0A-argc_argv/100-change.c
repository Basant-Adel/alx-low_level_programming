#include <stdio.h>
#include <stdlib.h>

/**
 *main - A program that prints the minimum number of coins
 *to make change for an amount of money
 *@argc: The number of arguments (int)
 *@argv: An array of C-style strings (list)
 *Return: 0 (Successful), non-zero-fail
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int b, leastcents = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (b = 0; b < 5; b++)
		{
			if (money >= cents[b])
			{
				leastcents += money / cents[b];
				money = money % cents[b];
				if (money % cents[b] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", leastcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
