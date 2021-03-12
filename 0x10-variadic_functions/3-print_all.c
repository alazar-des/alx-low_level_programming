#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print character
 * @c: input character
 *
 */
void print_char(int c)
{
	printf("%c", (char)c);
}

/**
 * print_integer - print integer
 * @n: input integer
 *
 */
void print_integer(int n)
{
	printf("%d", n);
}

/**
 * print_float - print float
 * @f: input float
 *
 */
void print_float(double f)
{
	printf("%f", (float)f);
}

/**
 * print_string - print string
 * @s: input string
 *
 */
void print_string(char *s)
{
	while (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - print any and as many input
 * @format: fomat of the input to be printed
 *
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i, j;
	char c;

	i = 0, j = 0;
	if (format != NULL)
	{
		va_start(arg, format);
		while (format[i])
		{
			c = format[i];
			if (j != 0 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
				printf(", ");
			switch (c)
			{
			case 'c':
				print_char(va_arg(arg, int));
				i++, j++;
				break;
			case 'i':
				print_integer(va_arg(arg, int));
				i++, j++;
				break;
			case 'f':
				print_float(va_arg(arg, double));
				i++, j++;
				break;
			case 's':
				print_string(va_arg(arg, char *));
				i++, j++;
				break;
			default:
				i++;
				break;
			}
		}
		va_end(arg);
	}
	printf("\n");
}
