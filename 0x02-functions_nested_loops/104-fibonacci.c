#include <stdio.h>

/**
 * main - program entry
 * Description - print the first 98 Fibonacci numbers
 *
 * Return: on success 0
 */

int main(void)
{
	double xn_2 = 0;
	double xn_1 = 1;
	double xn;
	int i;

	for (i = 0; i < 98; i++)
	{
		xn = xn_1 + xn_2;
		xn_2 = xn_1;
		xn_1 = xn;
		if (i != 97)
			printf("%f0, ", xn);
		else
			printf("%f0\n", xn);
	}

	return (0);
}
