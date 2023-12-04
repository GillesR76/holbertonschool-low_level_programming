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
	int fd, len = 0, i;
	char *buffer;
	ssize_t write_bytes;

	if (filename == NULL)
		return (-1);

	while (text_content != NULL && text_content[len] != '\0')
		len++;

	if (text_content != NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		if (fd == -1)
			return (-1);

		buffer = malloc(len + 1);
		if (buffer == NULL)
		{
			close(fd);
			return (-1);
		}
		for (i = 0; i < len; i++)
		{
			buffer[i] = text_content[i];
			buffer[len] = '\0';
		}

		write_bytes = write(fd, buffer, len);
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
