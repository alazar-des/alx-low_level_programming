#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _cpy - copy content from one file to another
 * @fdr: file descriptor conternt to copy from
 * @fdw: file descriptor content to be copied to
 * @from: file path name content to copy from
 * @to: file path name content to be copied to
 *
 */
void _cpy(int fdr, int fdw, char *from, char *to)
{
	ssize_t r, w;
	char buf[1024];

	do {
		r = read(fdr, buf, 1024);
		if (r == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", from);
			exit(98);
		}
		w = write(fdw, buf, r);
		if (w == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", to);
			exit(99);
		}
	} while (r >= 1024);
}

/**
 * main - program entry
 * Description - copy content of file from one file to another
 * @argc: number of arguments
 * @argv: file path from and to copy inputs
 *
 * Return: on sucess 0
 */
int main(int argc, char *argv[])
{
	int fdr, fdw;
	ssize_t c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdr = open(argv[1], O_RDONLY);
	if (fdr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdw = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fdw == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	_cpy(fdr, fdw, argv[1], argv[2]);
	c = close(fdr);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdr);
		exit(100);
	}
	c = close(fdw);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	return (0);
}
