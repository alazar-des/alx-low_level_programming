#include <unistd.h>

/**
 * _print - print string to standard output
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
 * Description - print program name
 * @argc: number of input arguments
 * @argv: input agrument vector
 *
 * Return: on success 0
 */
int main(int argc, char *argv[])
{
	if (argc)
	{
		_print(argv[0]);
		_print("\n");
	}
	return (0);
}
