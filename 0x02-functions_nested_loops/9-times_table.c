#include "holberton.h"

/**
 * times_table - print the 9 time table starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (mul > 9)
			{
				_putchar('0' + mul / 10);
				_putchar('0' + mul % 10);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + mul);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar ('\n');
	}
}
