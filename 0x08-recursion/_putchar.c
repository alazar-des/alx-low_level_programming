#include <unistd.h>

/**
 * _putchar - print character to standard library
 * @c: character to be printed
 *
 * Return: on success return 0
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
