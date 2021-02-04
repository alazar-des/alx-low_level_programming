#include <stdio.h>

/* print all possible combinations of two digits */
int main(void)
{
  int i;
  int j;

  for (i = 0; i < 10; i++)
  {
    for (j = i + 1; j < 10; j++)
    {
      putchar(i + '0');
      putchar(j + '0');
      putchar(',');
      putchar(' ');
    }
  }
  putchar('\n');

  return (0);
}
