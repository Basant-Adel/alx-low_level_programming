#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * printf - A function to Print the "Please make me win!" message
 *@format: It's a String Format
 *Return: 0 (EXIT_SUCCESS)
*/

void printf(unsigned int format)
{
	const char *nums_txt = "9 8 10 24 75 - 9\n";
	const char *txt = "Congratulations, you win the Jackpot!\n";

	(void)format;
	write(STDOUT_FILENO, (void *)nums_txt, 17);
	write(STDOUT_FILENO, (void *)txt, 38);
	exit(EXIT_SUCCESS);
}
