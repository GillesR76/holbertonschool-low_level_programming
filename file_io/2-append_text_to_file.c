#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: string
 *
 * Return: 1 on success and -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_bytes;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_APPEND, 0600);
	if (fd == -1)
		return (-1);

	write_bytes = write(fd, text_content, len);
	if (write_bytes == -1 || write_bytes != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
