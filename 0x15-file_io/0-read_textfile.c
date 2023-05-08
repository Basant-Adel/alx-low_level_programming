#include "main.h"

/**
 * read_textfile - A function that reads a text file
 *and prints it to the POSIX standard output
 *
 *@filename: It's a name of file it should read and print
 *@letters: It's a number of bytes it should read and print
 *Return: The actual number of letters it could read and print
 *not be opened or read, return 0
 *filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ba;
	ssize_t na_num;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
	{
		return (0);
	}
	ba = open(filename, O_RDONLY);

	if (ba == -1)
	{
		return (0);
	}
	na_num = read(ba, &buf[0], letters);
	na_num = write(STDOUT_FILENO, &buf[0], na_num);
	close(ba);
	return (na_num);
}
