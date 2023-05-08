#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: null-terminated string to be written to file
 * Return: Success (1), failure (-1)
 */

int create_file(const char *filename, char *text_content)
{
	mode_t mode = 0600;
	int len = strlen(text_content);
	int fd = creat(filename, mode);
	ssize_t bytes_written;

	if (fd < 0)
	{
		return (-2);
	}

	bytes_written = write(fd, text_content, len);
	if (bytes_written < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

