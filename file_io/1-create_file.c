#include "main.h"

/**
 * create_file - creates a file and writes text_content to it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write into the file
 * Return: 1 on success -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t total = 0, written;
	size_t len = 0;
	const char *p;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		p = text_content;
		while (total < (ssize_t)len)
		{
			written = write(fd, p + total, len - total);
			if (written == -1)
			{
				close(fd);
				return (-1);
			}
			total = total + written;
		}
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
