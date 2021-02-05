#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lower and upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chl = 'a';
	char chu = 'A';

	while (chl <= 'z')
	{
		putchar(chl);
		chl++;
	}
	while (chu <= 'Z')
	{
		putchar(chu);
		chu++;
	}
	putchar('\n');

	return (0);
}
