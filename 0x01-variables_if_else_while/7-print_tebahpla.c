#include <stdio.h>

/* lower case alphabet in reverse order */
int main()
{
  char ch = 'z';

  while (ch >= 'a')
  {
    putchar(ch);
    ch--;
  }
  putchar('\n');
  
  return (0);
}
