#include <unistd.h>

#define UNUSED(argv) (void)(argv)
/**
 * _print - print string to standard output
 * @n: input intiger
 *
 */
void _print(int n)
{
	int c = n;

	if (n / 10)
		_print(n / 10);
	c = (c % 10) + '0';
	write(1, &(c), 1);
}

/**
 * main - program entry
 * Description - print number of arguments
 * @argc: number of arguments
 * @argv: argument array
 *
 * Return: on success 0
 */
int main(int argc, char *argv[])
{
	char c;

	UNUSED (argv);
	_print(argc - 1);
	c = '\n';
	write(1, &c, 1);	
	return (0);
}
