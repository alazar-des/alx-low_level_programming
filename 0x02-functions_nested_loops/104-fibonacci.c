#include <stdio.h>

/**
 * main - program entry
 * Description - print the first 98 Fibonacci numbers
 *
 * Return: on success 0
 */

int main(void)
{
	long double xn_2 = 0;
	long double xn_1 = 1;
	long double xn;
	int i;

	for (i = 0; i < 98; i++)
	{
		xn = xn_1 + xn_2;
		xn_2 = xn_1;
		xn_1 = xn;
		if (i != 97)
			printf("%Lf, ", xn);
		else
			printf("%Lf\n", xn);
	}

	return (0);
}
