#include <stdio.h>

/**
 * prime_factz - find the largest prime factor
 * @n: input number
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
			n = n / i;
			prime_factz(n);
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
	long int n = 612852475143;

	long int pri = prime_factz(n);

	printf("%ld\n", pri);

	return (0);
}
