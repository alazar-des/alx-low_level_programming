#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text to file
 * @filename: file name to append to
 * @text_content: text to be appended
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
