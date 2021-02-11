#include <unistd.h>

/**
 * __putchar - print char to std
 * @c: character to be printed
 *
 * Return: on sucess 0
 */

int __putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_int - print integer using _putchar
 * @n: integer to be printed
 *
 */

void print_int(int n)
{
	if (n / 10)
		print_int(n / 10);
	__putchar('0' + n % 10);
}

/**
 * print_str - print string using putchar
 * @str: string to be printed
 *
 */

void print_str(char str[])
{
	int i = 0;

	while (str[i] != '\0')
	{
		__putchar(str[i]);
		i++;
	}
}

/**
 * main - program entry
 *
 * Return: on success 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			print_str("FizzBuzz");
		else if (i % 3 == 0)
			print_str("Fizz");
		else if (i % 5 == 0)
			print_str("Buzz");
		else
			print_int(i);
		if (i != 100)
			__putchar(' ');
		i++;
	}
	__putchar('\n');

	return (0);
}
