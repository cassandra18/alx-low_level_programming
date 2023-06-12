#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the file to be read
 * @letters: is the number of letters it should read and print
 * Return: if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fileDescriptor;
	char *buffer;
	ssize_t read_bytes;
	ssize_t written_bytes;


	if (filename == NULL)
	{
		return (0);
	}

	fileDescriptor = fopen(filename, "r");
	if (fileDescriptor == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(fileDescriptor);
		return (0);
	}


	read_bytes = fread(buffer, sizeof(char), letters, fileDescriptor);

	if (read_bytes < 0)
	{
		fclose(fileDescriptor);
		free(buffer);
		return (0);
	}

	buffer[read_bytes] = '\0';


	written_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);

	if (written_bytes < read_bytes)
	{
		fclose(fileDescriptor);
		free(buffer);
		return (0);
	}

	fclose(fileDescriptor);
	free(buffer);
	return (written_bytes);
}
