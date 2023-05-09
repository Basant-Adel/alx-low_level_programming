#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - A program that copies the content of a file to another file
 *@ac: It's a argument count
 *@av: It's a argument vector
 *Return: 1 on successful, -1 on failure
 */

int main(int ac, char **av)
{
	int from_ba = 0, to_ba = 0;
	ssize_t na_num;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, USAGE), exit(97);
	}
	from_ba = open(av[1], O_RDONLY);
	if (from_ba == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	to_ba = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_ba == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	}
	while ((na_num = read(from_ba, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(to_ba, buf, na_num) != na_num)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
		}
	}
	if (na_num == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	}
	from_ba = close(from_ba);
	to_ba = close(to_ba);
	if (from_ba)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_ba), exit(100);
	}
	if (to_ba)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_ba), exit(100);
	}
	return (EXIT_SUCCESS);
}
