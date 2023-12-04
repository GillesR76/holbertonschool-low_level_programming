#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	char *buffer;
	ssize_t read_bytes, write_bytes;

	if (filename == NULL)
		return (-1);

	while (text_content != NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);

		buffer = malloc(strlen(text_content) + 1);
		if (buffer == NULL)
		{
			close(fd);
			return (-1);
		}

		read_bytes = read(fd, buffer, *text_content);
		if (read_bytes == -1)
		{
			free(buffer);
			close(fd);
			return (-1);
		}

		write_bytes = write(STDOUT_FILENO, buffer, read_bytes);
		if (write_bytes == -1)
		{
			free(buffer);
			close(fd);
			return (-1);
		}
	}
	free(buffer);
	close(fd);
	return (1);
}
