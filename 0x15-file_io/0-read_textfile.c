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
ssize_t open_file;
char *buffer;
ssize_t read_bytes;
ssize_t written_bytes;


if (filename == NULL)
{
return (0);
}

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
return (0);
}


open_file = open(filename, O_RDONLY);
read_bytes = read(open_file, buffer, letters);
written_bytes = write(STDOUT_FILENO, buffer, read_bytes);

if (open_file == -1 || read_bytes == -1 || written_bytes == -1 ||
written_bytes != read_bytes)
{

free(buffer);
return (0);
}

free(buffer);
close(open_file);

return (written_bytes);
}
