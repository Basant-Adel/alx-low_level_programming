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
 * append_text_to_file - A function that appends text at the end of a file
 *@filename: It's the name of file
 *@text_content: It's the NULL terminated string to add at the end of the file
 *Return: 1 on success, -1 on failure, Don't create file if it doesn't exist
 *filename is NULL return -1
 *text_content is NULL, do not add anything to the file
 *Return 1 if the file exists and -1 if the file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ba;
	ssize_t na_num = 0, len = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	ba = open(filename, O_WRONLY | O_APPEND);

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
