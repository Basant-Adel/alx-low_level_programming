#include "main.h"

/**
 * _strlen - returns the length of a string
 *@s: String
 *Return: Length
 */

int _strlen(char *s)
{
	int b = 0;

	if (!s)
	{
		return (0);
	}

	while (*s++)
	{
		b++;
	}
	return (b);
}

/**
 * create_file - A function that creates a file
 *@filename: It's the name of file to create
 *@text_content: It's a NULL terminated string to write to the file
 *
 *Return: 1 on successful, -1 on failure
 *(file can not be created, file can not be written, write “fails”)
 *filename is NULL return -1
 *text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int ba;
	ssize_t na_num = 0, len = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	ba = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (ba == -1)
	{
		return (-1);
	}

	if (len)
	{
		na_num = write(ba, text_content, len);
	}
	close(ba);
	return (na_num == len ? 1 : -1);
}
