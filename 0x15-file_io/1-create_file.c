#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - create file and write a content
 * @filename: file name
 * @text_content: content to be writen to the file
 *
 * Return: 1 on success, -1 on open or write failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = 0;
	if (text_content != NULL)
		while (text_content[len] != '\0')
			len++;
	if (len != 0)
		w = write(fd, text_content, len);
	if (w == -1)
		return (-1);
	return (1);
}
