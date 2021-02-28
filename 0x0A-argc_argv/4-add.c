#include <unistd.h>
#define UNUSED(x) (void)(x)

/**
 * _pow - calculate x the power of y
 * @x: base
 * @y: exponent
 *
 * Return: result
 */
int _pow(int x, int y)
{
	if (y > 0)
		return (x * _pow(x, y - 1));
	else
		return (1);
}

/**
 * _atoi - convert string to number
 * @s: input string
 * @n: number of digits
 *
 * Return: integer
 */

int _atoi(char *s, int n)
{
	int sum, v;

	v = 1;
	sum = 0;
	if (*s == '-')
	{
		s++;
		v = -1;
	}
	while (*s != '\0')
	{
		sum += (*s - 48) * _pow(10, n - 1);
		s++;
		n--;
	}
	return (v * sum);
}

/**
 * _print_str - print string to standard output
 * @s: string to be printed
 *
 */
void _print_str(char *s)
{
	if (*s != '\0')
	{
		write(1, s, 1);
		_print_str(s + 1);
	}
}
/**
 * _print_dig - print number into standard output
 * @n: intiger to be printed
 *
 */
void _print_dig(int n)
{
	int c;

	if (n / 10)
		_print_dig(n / 10);
	if (n < 0)
		c = (-n % 10) + '0';
	else
		c = (n % 10) + '0';
	write(1, &c, 1);
}

/**
 * main - program entry
 * Description - conver string of numbers to int
 * @argc: number of input arguments
 * @argv: vector of input arguments
 *
 * Return: intiger value
 */
int main(int argc, char *argv[])
{
	int i, d;
	char *n;
	int sum;

	sum = 0;
	i = 1;
	d = 0;
	if (argc > 2)
	{
		while (i < argc)
		{
			d = 0;
			n = argv[i];
			if (*n == '-')
			{
				if (*(n + 1) == '\0')
				{
					_print_str("Error\n");
					return (1);
				}
				else
					n++;
			}
			while (*n != '\0')
			{
				if (!(*n >= 48 && *n <= 57))
				{
					_print_str("Error\n");
					return (1);
				}
				d++;
				n++;
			}
			sum += _atoi(argv[i], d);
			i++;
		}
		if (sum < 0)
			_print_str("-");
		_print_dig(sum);
		_print_str("\n");
		return (0);
	}
	else
	{
		_print_str("Error\n");
		return (1);
	}
}
