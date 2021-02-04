#include <stdio.h>

/* Print alphabet in lower and upper case */
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
