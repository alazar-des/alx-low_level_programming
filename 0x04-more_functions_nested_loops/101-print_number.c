#include "holberton.h"

/**
 * _abs - return absoute number of an intiger
 * @n - input intiger
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
} 
/**
 * print_number - print number using putchar
 * @n: intiger to be printed
 *
 */

void print_number(int n)
{	
	if (n < 0)
		_putchar('-');
	if (_abs(n / 10))
		print_number(_abs(n / 10));

	_putchar('0' + _abs(n) % 10);
}
