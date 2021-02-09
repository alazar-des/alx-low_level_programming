#include "holberton.h"

/**
 * print_digit - print digit using putchar
 * @n: digit to be printed
 */
void print_digit(int n)
{
	if (n / 10)
		print_digit(n / 10);
	_putchar(n % 10 + '0');
}

/**
 * print_times_table - print times table of any input n
 * @n: input to be printed from 0 to n times table
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
	int i;
	int j;
	int mul;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			mul = i * j;
			if (j != 0)
			{
				if (mul < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (mul < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			print_digit(mul);
		}
		_putchar('\n');
	}
	}
}
