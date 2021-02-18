#include "holberton.h"

/**
 * _abs - return absolute value of a number
 * @n: input integer
 *
 * Return: the absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

/**
 * print_number - print integer
 * @n: input integer
 *
 */
void print_number(int n)
{
	if ( n < 0)
		_putchar('-');
	if (n / 10)
		print_number(_abs(n / 10));
	_putchar('0' + _abs(n % 10));
}
