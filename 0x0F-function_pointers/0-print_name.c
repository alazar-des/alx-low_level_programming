#include <unistd.h>

/**
 * _print - print string to standard output
 * @str: input string to be printed
 *
 */
void _print(char *str)
{
	char nl = '\n';

	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, &nl, 1);
}

/**
 * print_name - print name to standard ouput
 * @name: name to be printed
 * @f: callback function that prints a string to standard ouput
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
