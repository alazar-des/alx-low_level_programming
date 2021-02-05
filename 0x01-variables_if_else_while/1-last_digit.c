#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 * Description: print last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	unsigned int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ld = abs(n % 10);

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	else if (n == 0)
		printf("Last digit of %d is %d and is zero\n", n, ld);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);

	return (0);
}
