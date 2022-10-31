#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: string name of file
 * @letters: size_t, the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t wcount, read_check;

	if (!filename)
		return (0);
	/* read */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}

	read_check = read(fd, buf, letters);
	if (read_check == -1)
		return (0);

	wcount = write(STDOUT_FILENO, buf, read_check);
	if (wcount == -1 || wcount != read_check)
		return (0);

	close(fd);
	free(buf);

	return (wcount);
}
