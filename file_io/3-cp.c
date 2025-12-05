#include "main.h"

#define BUF_SIZE 1024

/**
 * open_from - open source file read-only
 * @file: source filename
 * Return: file descriptor or -1 on error
 */

static int open_from(const char *file)
{
	int fd = open(file, O_RDONLY);

	if (fd < 0)
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file);
	return (fd);
}


/**
 * open_to - open (or create) destination file truncated
 * @file: destination filename
 * Return: file descriptor or -1 on error
 */

static int open_to(const char *file)
{
	int fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd < 0)
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
	return (fd);
}

/**
 * copy_fd - copy content from fd_from to fd_to
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * Return: 0 on success, -1 on error
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
	return (r < 0 ? -1 : 0);
}

/**
 * main - copy a file to another
 * @ac: arg count
 * @av: arg vector
 * Return: 0 on success, exits with codes on error
 */

int main(int ac, char **av)
{
	int f1, f2, rc;

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
