#include "main.h"

/**
 * handle_error - prints error message to the standard input
 * @message: the message to print
 * @number: the status code to exit
 * @filename: the file name
 */
void handle_error(const char *message, const char *filename, int number)
{
	if (filename != NULL)
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(number);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 *
 */

int main(int argc, char **argv)
{
	int fdFrom, fdTo;
	ssize_t readBytes, writtenBytes;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		handle_error("Usage: cp file_from", "file_to", 97);
	fdFrom = open(argv[1], O_RDONLY);
	if (fdFrom == -1)
		handle_error("Error: Can't read from file", argv[1], 98);
	fdTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdTo == -1)
		handle_error("Error: Can't write to", argv[2], 99);
	while ((readBytes = read(fdFrom, buffer, BUFFER_SIZE)) > 0)
	{
		writtenBytes = write(fdTo, buffer, readBytes);
		if (writtenBytes == -1 || writtenBytes != readBytes)
		{
			close(fdFrom);
			close(fdTo);
			handle_error("Error: Can't write to", argv[2], 99);
		}
	}

	if (readBytes == -1)
	{
		close(fdFrom);
		close(fdTo);
		handle_error("Error: Can't read from file", argv[1], 98);
	}
	if (close(fdFrom) == -1)
	{
		handle_error("Error: Can't close fd", "fdFrom", 100);
	}
	else if (close(fdTo) == -1)
	{
		handle_error("Error: Can't close fd", "fdTo", 100);
	}
	return (0);
}
