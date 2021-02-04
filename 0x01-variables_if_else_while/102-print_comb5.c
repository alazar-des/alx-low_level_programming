#include <stdio.h>

/* print combination of all two digits of two digits */
int main(void)
{
  int i;
  int j;
  int k;
  int l;

  for (i = 0; i < 10; i++)
  {
    for (j = i; j < 10; j++)
    {
      for (k = j; k < 10; k++)
	{
	  for (l = k; l < 10; l++)
	    {
	      putchar(i + '0');
	      putchar(j + '0');
	      putchar(' ');
	      putchar(k + '0');
	      putchar(l + '0');
	      putchar(',');
	      putchar(' ');
	    }
	}
    }
  }
  putchar('\n');

  return (0);
}
