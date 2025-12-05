#include "main.h"

#define BUF_SIZE 1024

/**
 * open_from - opens a file for reading
 * @file: name of the file to open
 *
 * Return: file descriptor on success, -1 on error
 */

static int open_from(const char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file);
	return (fd);
}

/**
 * open_to - opens/creates a file for writing (truncate if exists)
 * @file: name of the file to open/create
 *
 * Return: file descriptor on success, -1 on error
 */

static int open_to(const char *file)
{
	int fd;

	fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd < 0)
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
	return (fd);
}

/**
 * copy_fd - copy the content from one file descriptor to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * Return: 0 on success, -1 on failure
 */

static int copy_fd(int fd_from, int fd_to)
{
	char buf[BUF_SIZE];
	ssize_t r, w;

	while ((r = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w != r)
			return (-1);
	}
	if (r < 0)
		return (-1);
	return (0);
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: argument vector
 * Return: 0 on success, otherwise exit with error code
 */

int main(int ac, char **av)
{
	int f1, f2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f1 = open_from(av[1]);
	if (f1 < 0)
		exit(98);

	f2 = open_to(av[2]);
	if (f2 < 0)
	{
		close(f1);
		exit(99);
	}

	if (copy_fd(f1, f2) < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
		close(f1);
		close(f2);
		exit(99);
	}

	if (close(f1) < 0 || close(f2) < 0)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n",
				(close(f1) < 0) ? f1 : f2);
		exit(100);
	}
	return (0);
}
