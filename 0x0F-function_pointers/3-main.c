#include "3-calc.h"

/**
 * main - Program Entry (check the code)
 *@argc: argument counter
 *@argv: argument vector
 *Return: Always 0 successful
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int), x, z;

	if (argc != 4)
		printf("Error\n"), exit(98);

	x = atoi(argv[1]);
	z = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
		printf("Error\n"), exit(99);

	if (!z && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", op_func(x, z));
	return (0);
}
