#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * cp_file - copies the content of a file to another file.
 * @file_from: string name of file to copy from
 * @file_to: string name of file to copy to
 *
 * Return: Nothing
 */
int cp_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, close_fd_from, close_fd_to;
	unsigned char buf[1024];
	ssize_t bytesRead = 0;
	ssize_t w_check = 0;

	fd_from = open(file_from, O_RDONLY);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (fd_from == -1)
		return (98);
	if (fd_to == -1)
		return (99);
	if ((fd_from >= 0) && (fd_to >= 0))
	{
		while ((bytesRead = read(fd_from, buf, sizeof(buf))) > 0)
		{
			w_check = write(fd_to, buf, bytesRead);
			if (w_check != bytesRead)
			{
				return (99);
			}
		}
	}

	close_fd_from = close(fd_from);
	if (close_fd_from != 0)
		return (fd_from + 100);
	close_fd_to = close(fd_to);
	if (close_fd_to != 0)
		return (fd_to + 100);
	return (0);
}

/**
 * main - check the code for ALX School students.
 *
 * @ac: argument counter
 * @av: argument vector
 *
 * Return:: Always 0.
 */
int main(int ac, char **av)
{
	int check;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (!av[1])
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	check = cp_file(av[1], av[2]);
	if (check == 99)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (check == 98)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (check == 100)
	{
		dprintf(2, "Error: Can't close fd %d\n", (check - 100));
		exit(100);
	}

	return (0);
}
