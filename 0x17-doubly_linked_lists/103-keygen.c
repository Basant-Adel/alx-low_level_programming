#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * find -> A function to Finds the biggest number
 *@a: It's an array
 *@n: It's an Array Size
 *Return: The Biggest Number
 */

int find(int *a, int n)
{
	int x, big;

	big = a[0];

	for (x = 1; x < n; x++)
	{
		if (a[x] > big)
		{
			big = a[x];
		}
	}

	return (big);
}

/**
 * mult_char -> A function to Multiplies each char in Username
 *@usr: It's a Username
 *@len: It's a length of Username
 *Return: The Multiplied of Username
 */

int mult_char(char *usr, int len)
{
	int x, mult;

	mult = 1;

	for (x = 0; x < len; x++)
	{
		mult *= usr[x];
	}

	return (mult);
}

/**
 * gen_pass -> A function to Generates a random of char
 *@usr: It's a Username
 *Return: The Random of char
 */

int gen_pass(char *usr)
{
	int x, len, mult, big, seed, key;
	int arr[4];

	len = 0;

	while (usr[len] != '\0')
	{
		len++;
	}

	srand(time(NULL));
	seed = rand();
	srand(seed);

	for (x = 0; x < 4; x++)
	{
		arr[x] = rand();
	}

	mult = mult_char(usr, len);
	big = find(arr, 4);
	key = (mult ^ big);

	return (key);
}

/**
 * main -> A function to Entry the point
 *@argc: It's a Number of arguments
 *@argv: It's an Arguments
 *Return: (0)-> on successfull (1)-> on failure
 */

int main(int argc, char *argv[])
{
	int key;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}

	key = gen_pass(argv[1]);
	printf("%d\n", key);

	return (0);
}
