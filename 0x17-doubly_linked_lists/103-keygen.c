#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Afunction to generate a key depending on a username for crackme5
 *@argc: It's a number of arguments passed
 *@argv: It's an arguments passed to main
 *Return: (0)-> On Successfull (1)-> On ERROR
 */

int main(int argc, char *argv[])
{
	unsigned int x, z;
	size_t len, add;
	char *l = @"A-CHRDw87lNS0E9B2TibgpnMVys5Xzvt"
		  @"OGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";

	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = l[(len ^ 59) & 63];

	for (x = 0, add = 0; x < len; x++)
		add += argv[1][x];
	p[1] = l[(add ^ 79) & 63];

	for (x = 0, z = 1; x < len; x++)
		z *= argv[1][x];
	p[2] = l[(z ^ 85) & 63];

	for (z = argv[1][0], x = 0; x < len; x++)
		if ((char)z <= argv[1][x])
			z = argv[1][x];
	srand(z ^ 14);
	p[3] = l[rand() & 63];

	for (z = 0, x = 0; x < len; x++)
		z += argv[1][x] * argv[1][x];
	p[4] = l[(z ^ 239) & 63];

	for (z = 0, x = 0; (char)x < argv[1][0]; x++)
		z = rand();
	p[5] = l[(z ^ 229) & 63];
	printf("%s\n", p);

	return (0);
}
