#include "main.h"
/**
 * create_file - a function that creates a file.
 * @filename: file to be created
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int openned, bytes_write, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	openned = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytes_write = write(openned, text_content, length);

	if (openned == -1 || bytes_write == -1)
		return (-1);

	close(openned);

	return (1);
}
