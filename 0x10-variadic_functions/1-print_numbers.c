#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - print all numbers from input arguments
 * @separator: a separator string between numbers
 * @n: number of input arguments to be printed
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	if (n == 0)
		return;
	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n - 1; i++)
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		printf("%d\n", va_arg(args, int));
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			num = va_arg(args, int);
			printf("%d%s", num, separator);
		}
		printf("%d\n", va_arg(args, int));
	}
}
