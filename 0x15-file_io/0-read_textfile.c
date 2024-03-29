#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - read text from a file and output to standard output
 * @filename: file name text to read from
 * @letters: number of characters to read
 *
 * Return: on success the actual number read and printed, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rlen, wlen;
	void *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	rlen = read(fd, buf, letters);
	if (rlen == -1)
	{
		if (buf != NULL)
			free(buf);
		return (0);
	}
	wlen = write(STDOUT_FILENO, buf, rlen);
	if (wlen != rlen)
	{
		if (buf != NULL)
			free(buf);
		return (0);
	}
	fd = close(fd);
	if (fd == -1)
		return (0);
	return (wlen);
}
