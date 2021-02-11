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
int prime_factz(int n, int i)
{
	int pri = n;

	if (n % i == 0)
	{
		prime_factz(n / i, i);
		pri = i;
	}
	
	return pri;
}

/**
 * main - program entry
 *
 * Return: on sucess 0,
 */
int main(void)
{
	int i = 2;
	int n = 20;
	int pri;

	while (i < n / 2)
	{
		pri = prime_factz(n, i);
		i++;
	}

	__putchar(pri);

	_putchar('\n');
	return (0);
}
