#include <unistd.h>

/**
 * _reverseString - print string in reverse
 * @s: string
 *
 */
void _reverseString(char *s)
{
	if (*s != '\0')
		_reverseString(s + 1);
	write(1, s, 1);
}

/**
 * _print_rev_recursion - print string in reverse
 * @s: string input
 *
 */
void _print_rev_recursion(char *s)
{
	_reverseString(s);
}
