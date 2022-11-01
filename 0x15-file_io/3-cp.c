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
	int file_from, file_to, text_len;
	unsigned char buf[1024];
	size_t bytesRead = 0;
	ssize_t w_check;

	/* write */
	file_from = open(file_from, O_RDONLY);
	file_to = creat(file_to, 0664);

	if (file_from == -1)
		return (98);
	if (file_to == -1)
		return (99);
	if ((file_from >= 0) && (file_to >= 0))
	{
		while ((bytesRead = read(file_from, buf, sizeof(buf))) > 0)
		{
			w_check = write(file_to, buf, bytesRead);
			if (w_check == -1)
				return (99);
			if (w_check != bytesRead)
			{
				bytesRead = -1;
			}
		}
	}

	if (w_check == -1)
	{
		return (-1);
	}

	close(file_from);
	close(file_to);
	return (sz == 0) ? 0 : -1;
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
	int res;

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
        cp_file(av[1], av[2]);

        return (0);
}
