#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print all strings of input argument to stadard output
 * @separator: separator between strings
 * @n: number of strings to be displayed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	if (n > 0)
	{
	va_start(args, n);
	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
	}
	else
	{
		for (i = 0; i < n - 1; i++)
		{
			str = va_arg(args, char *);
			if (str == NULL)
				printf("(nil)%s", separator);
			else
				printf("%s%s", str, separator);
		}
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
	}
	}
	printf("\n");
}
