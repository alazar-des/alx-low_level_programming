#include <unistd.h>

/**
 * _putchar - print character
 * @c: character to be printed
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * __putchar - print intiger
 * @n: intiger input
 *
 */
void __putchar(int n)
{
	if (n / 10)
		__putchar(n / 10);
	_putchar('0' + n % 10);
}

/**
 * prime_factz - find the largest prime factor
 * @n: input number
 * @i: factorial
 *
 * Return: largest prime factor
 */
int prime_factz(int n)
{
	int i = 2;

	while (i < n / 2)
	{
		if (n % i == 0)
		{
			prime_factz(n / i);
		}
		i++;
	}
	return (n);
}

/**
 * main - program entry
 *
 * Return: on sucess 0,
 */
int main(void)
{
	int n = 20;

	int pri = prime_factz(n);

	__putchar(pri);

	_putchar('\n');
	return (0);
}
