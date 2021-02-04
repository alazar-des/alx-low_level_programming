#include <stdio.h>

/* print base 10 digits using putchar without using char */
int main(void)
{
  int i;
  for (i=0; i<10; i++)
    putchar(i + '0');
  putchar('\n');

  return (0);
}
