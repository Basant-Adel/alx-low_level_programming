#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number
 *@n: The binary number
 *Return: The binary
 */

void print_binary(unsigned long int n)
{
	int bina = sizeof(n) * 8, printed_num = 0;

	while (bina)
	{
		if (n & 1L << --bina)
		{
			_putchar('1');
			printed_num++;
		}
		else if (printed_num)
		{
			_putchar('0');
		}
	}
	if (!printed_num)
	{
		_putchar('0');
	}
}
