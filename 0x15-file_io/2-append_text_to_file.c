#include "main.h"

/**
*append_text_to_file - appends text at end of file
*@filename: name of file
*@text_content: text to write to end of file
*Return: success (1), failure (-1)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_WRONLY | O_APPEND);
	int len = strlen(text_content);
	ssize_t bytes_written;

	if (text_content == NULL)
	{
		return (-1);
	}

	if (fd < 1)
	{
		return (-1);
	}

	bytes_written = write(fd, text_content, len);

	if (bytes_written < 1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
