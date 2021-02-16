#include <stdio.h>

/**
 * print_array - print array
 * @a: input array
 * @n: number of elements of an array to be printed
 *
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}
