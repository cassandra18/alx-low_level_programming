#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file = 0;
	int len = 0;
	int bytes_written = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	open_file = open(filename, O_WRONLY | O_APPEND);
	bytes_written = write(open_file, text_content, len);

	if (open_file == -1 || bytes_written == -1)
	{
		return (-1);
	}

	close(open_file);

	return (1);
}
