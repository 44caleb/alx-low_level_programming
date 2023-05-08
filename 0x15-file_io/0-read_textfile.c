#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdout
 * @filename: file to be read from
 * @letters: number of letters to be read and printed
 * Return: number of letters that were read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buff[1024];
	int source_fd;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	source_fd = open(filename, O_RDONLY);

	if (source_fd == -1)
	{
		return (0);
	}

	bytes_read = read(source_fd, buff, letters);

	if (bytes_read < 0)
	{
		return (0);
	}

	bytes_written = write(STDIN_FILENO, buff, bytes_read);

	if (bytes_written == -1)
	{
		return (0);
	}

	close(source_fd);
	return (bytes_written);
}
