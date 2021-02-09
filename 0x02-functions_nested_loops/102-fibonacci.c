#include <stdio.h>

/**
 * main - entry point
 * Description - print first 50 Fibonacci numbers
 *
 * Return: 0 on success
 */

int main(void)
{
	long int xn_2 = 0;
	long int xn_1 = 1;
	long int xn;
	int i;

	for (i = 0; i < 50; i++)
	{
		xn = xn_1 + xn_2;
		xn_2 = xn_1;
		xn_1 = xn;
		if (i != 49)
			printf("%ld, ", xn);
		else
			printf("%ld", xn);
	}
	printf("\n");

	return (0);
}
