#include <unistd.h>

/**
 * _puts_recursion - print string recursively
 * @s: string to be printed
 *
 */
void _puts_recursion(char *s)
{
  if (*s != '\0' && *(s - 1) != '\\')
    {
      write(1, s, 1);
      _puts_recursion(++s);
    }
  else
    {
      char c = '\n';
      write(1, &c, 1);
    }
}
