#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 *
 * @filename: file.
 * @letters: Number of letters it should read and print.
 * Return: Actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, reade, writee;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	reade = read(fd, buf, letters);
	if (reade == -1)
	{
		free(buf);
		return (0);
	}
	writee = write(STDOUT_FILENO, buf, reade);
	if (writee == -1 || reade != writee)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (writee);
}
