#include <unistd.h>

/**
 * _putchar - print a character to stdout
 * @c: input character to be printed
 *
 * Return: onsucess 0,
 */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
