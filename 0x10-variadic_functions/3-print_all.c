#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - print character
 * @c: input character
 *
 */
void print_char(char c)
{
	printf("%c", c);
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
void print_float(float f)
{
	printf("%f", f);
}

/**
 * print_string - print string
 * @s: input string
 *
 */
void print_string(char *s)
{
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - print any input
 * @format: format of the input string
 *
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i;
	char c;

	i = 0;
	va_start(arg, format);
	while (format[i])
	{
		c = format[i];
		if (i != 0 && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
			printf(", ");
		switch (c)
		{
		case 'c':
			print_char((char)va_arg(arg, int));
			i++;
			break;
		case 'i':
			print_integer(va_arg(arg, int));
			i++;
			break;
		case 'f':
			print_float((float)va_arg(arg, double));
			i++;
			break;
		case 's':
			print_string(va_arg(arg, char *));
			i++;
			break;
		default:
			i++;
			break;
		}
	}
	va_end(arg);
	printf("\n");
}
