#include "holberton.h"
/**
 * printnum - print number using putchar
 * @n: number to be printed
 *
 */

void printnum(int n)
{
	if (n / 10)
		printnum(n / 10);
	_putchar('0' + n % 10);
}

/**
 * more_numbers - print numbers from 0 to 14 ten times
 *
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
			printnum(j);
		_putchar('\n');
	}
}
