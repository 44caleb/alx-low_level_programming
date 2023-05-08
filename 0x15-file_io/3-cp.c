#include "main.h"

/**
*main - copies the content of a file to another file
*@argc: number of arguments
*@argv: array of arguments
*Return: always (0) success
*/

int main(int argc, char *argv[])
{
	int fd_to, fd_from;
	ssize_t bytes_from, bytes_to;
	char letters[1024];
	mode_t mode = 0664;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	bytes_from = read(fd_from, letters, 1024);

	if (bytes_from < 0 )
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, mode);

	if (fd_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	bytes_to = write(fd_to, letters, bytes_from);

	if (bytes_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_to);
		exit(100);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", fd_from);
		exit(100);
	}

	return (0);
}
