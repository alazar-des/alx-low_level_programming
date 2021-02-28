#include <unistd.h>

/**
 * _print - print string
 * @s: input string
 *
 */
void _print(char *s)
{
	if (*s != '\0')
	{
		write(1, s, 1);
		_print(++s);
	}
}

/**
 * main - program entry
 * Description - print input arguments to standard ouput
 * @argc: number of input string
 * @argv: input vector
 *
 * Return: on success 0
 */
int main(int argc, char *argv[])
{
	int i;
	char c = '\n';

	for (i = 0; i < argc; i++)
	{
		_print(argv[i]);
		write(1, &c, 1);
	}
	return (0);
}
