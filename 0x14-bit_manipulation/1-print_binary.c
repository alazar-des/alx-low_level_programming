#include <unistd.h>

/**
 * count_digit - count the number of digits on a decimal number
 * @n: decimal input
 *
 * Return: digits
 */
int count_digit(unsigned long int n)
{
	unsigned long int _b10;
	int len;

	_b10 = 10;
	len = 1;
	while (n > _b10)
	{
		if (len >= 20)
			return (20);
		_b10 *= 10;
		len++;
	}
	return (len);
}

/**
 * print_binary - prints binary number in decimal format
 * @n: decimal input
 *
 */
void print_binary(unsigned long int n)
{
	int len, i, lp;
	char c;
	unsigned long int ip;
	int flag = 0;

	if (n == 0)
	{
		c = '0';
		write(1, &c, 1);
	}
	else
	{
		len = count_digit(n);
		len *= 3;
		lp = 0;
		while (lp < len)
		{
			ip = n;
			i = (ip >> (len - lp - 1)) & 1;
			if (i == 1)
			{
				flag = 1;
				c = '1';
			}
			if (i == 0)
				c = '0';
			if (flag)
				write(1, &c, 1);
			lp++;
		}
	}
}
