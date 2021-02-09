#include "holberton.h"

/**
 * jack_bauer - print every minute of a day
 */

void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;
	int h;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
			h = 3;
		else
			h = 9;
		for (j = 0; j <= h; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
					_putchar('0' + k);
					_putchar('0' + l);
					_putchar('\n');
				}
			}
		}
	}
}
