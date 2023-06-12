#include "main.h"

/**
 * _strlen - returns the length of a string
 * @str: the string to get the length of
 * Return: the legth of the @str
 */
int _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}


/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fd;
	ssize_t len;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (-1);
	}

	fd = fopen(filename, "a");
	if(fd == NULL)
	{
		return (-1);
	}

	len = _strlen(text_content);
	bytes_written = fwrite(text_content, sizeof(char), len, fd);

	fclose(fd);

	if (bytes_written != len)
	{
	return (-1);
	}

	return (1);
}
