#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, file;
	char *buf;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		buf = text_content;
		while (*buf != '\0')
		{
			buf++;
		}
		file = write(fd, text_content, buf - text_content);
		if (file == -1)
		{
			write(1, "fails", 6);
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
