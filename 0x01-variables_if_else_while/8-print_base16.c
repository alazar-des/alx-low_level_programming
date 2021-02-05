#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j = 0;
for (i = 0; i < 16; i++)
{
if (i > 9)
{
putchar('a' + j);
j++;
}
else
putchar(i + '0');
}
putchar('\n');
return (0);
}
