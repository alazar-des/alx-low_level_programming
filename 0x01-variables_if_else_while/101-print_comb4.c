#include <stdio.h>

/* print all possible combinations of three digits */
int main(void)
{
int i;
int j;
int k;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
