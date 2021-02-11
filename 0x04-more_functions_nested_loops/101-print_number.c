#include "holberton.h"

/**
 * print_number - print number using putchar
 * @n: intiger to be printed
 *
 */

void print_number(int n)
{
	if (n < 0)
		_putchar('-');
	if (n / 10)
		print_number(n / 10);
	if (n < 0)
		n = -n;
	_putchar('0' + n % 10);
}
