#include <unistd.h>
#include "holberton.h"

/**
 * _reverseString - print string in reverse
 * @s: string
 *
 */
void _reverseString(char *s)
{
	if (*s != '\0')
		_reverseString(s + 1);
	else
		return;
	_putchar(*s);
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
