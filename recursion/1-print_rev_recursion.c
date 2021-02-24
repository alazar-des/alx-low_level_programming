#include <unistd.h>

/**
 * _reverseString - print string in reverse
 * @s: string
 *
 */
void _reverseString(char *s)
{
  if (*s != '\0' && *(s - 1) != '\'')
    _reverseString(++s);
  write(1, s, 1);
}
/**
 * _print_rev_recursion - print string in reverse
 * @s: string input
 *
 */
void _print_rev_recursion(char *s)
{
  char c = '\n';

  _reverseString(s);
  write(1, &c, 1);  
}
