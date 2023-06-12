#include "main.h"


/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the file whose chars are being stored by the bufer
 * Return: pointer to the buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - closes file descriptors
 * @fd: the file descriptors to be closed
 */
void close_file(int fd)
{
	int closer;

	closer = close(fd);
	if (closer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy contents of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: on success return 0
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, readto, writeto;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from_file = open(argv[1], O_RDONLY);
	readto = read(from_file, buffer, BUFFER_SIZE);
	to_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from_file == -1 || readto == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writeto = write(to_file, buffer, readto);
		if (to_file == -1 || writeto == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readto = read(from_file, buffer, BUFFER_SIZE);
		to_file = open(argv[2], O_WRONLY | O_APPEND);
	} while (readto > 0);

	free(buffer);
	close_file(from_file);
	close_file(to_file);

	return (0);
}
