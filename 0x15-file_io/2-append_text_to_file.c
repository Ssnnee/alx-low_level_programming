#include "main.h"
/**
 * append_text_to_file - a function that appends
 * text at the end of a file.
 *
 * @filename: file.
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, writee;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
		writee = write(fd, text_content, i);
		if (writee == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
