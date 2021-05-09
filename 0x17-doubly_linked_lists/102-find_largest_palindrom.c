#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * count_digit - count the number of digits in an integer number
 * @n: input number
 *
 * Return: number of digits
 */
int count_digit(int n)
{
	int count = 0;

	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/**
 * check_palindrom - check if a number is palindrom
 * @n: number to be checked
 *
 * Return: 1 if palindrom, otherwise 0
 */
int check_palindrom(int n)
{
	int d, i;
	char *dig;

	d = count_digit(n);
	dig = malloc(d);
	if (dig == NULL)
		exit(0);
	for (i = 0; i < d; i++)
	{
		dig[i] = n % 10;
		n /= 10;
	}
	for (i = 0; i < d / 2; i++)
		if (dig[i] != dig[d - i - 1])
			return (0);
	free(dig);
	return (1);
}

/**
 * find_largest_palindrom - find the largest palindrom number of product of
3 digit numbers
 *
 * Return: the largest palindrom if exists, otherwise 0
 */
int find_largest_palindrom(void)
{
	int i, n1, n2;

	for (i = 1998; i > 0; i--)
	{
		n1 = i / 2, n2 = i - n1;
		while (n2 <= 999)
		{
			if (check_palindrom(n1 * n2))
				return (n1 * n2);
			n2++, n1--;
		}
	}
	return (0);
}

/**
 * main - program entery point
 * Description - write largest palindrom of product of 3 digits to a file
 *
 * Return: 0
 */
int main(void)
{
	int larg_pal;
	FILE *fptr;

	larg_pal = find_largest_palindrom();
	printf("The largest palindrom num is %d\n", larg_pal);
	fptr = fopen("102-result", "w");
	if (fptr == NULL)
	{
		printf("Error!");
		exit(1);
	}

	fprintf(fptr, "%d", larg_pal);
	fclose(fptr);
	return (0);
}
