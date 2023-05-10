#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <fcntl.h>
/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count
 * @av: argument values
 *
 * Return: 0 on succes, -1 on error.
 */
int main(int ac, char **av)
{
	const char *file_from, *file_to;
	int fd1, fd2, sz;
	char buf[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	file_from = av[1], file_to = av[2];
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{ dprintf(2, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}
	while ((sz = read(fd1, buf, BUF_SIZE)) > 0)
	{
		if (write(fd2, buf, sz) != sz)
		{ dprintf(2, "Error: Can't write to file %s\n", file_to);
			exit(99);
		}
	}
	if (sz == -1)
	{ dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd1) == -1)
	{ dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close(fd2) == -1)
	{ dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	} return (0);
}
