#include <stdio.h>
#include <string.h>

int main () {
  char *s = "hello, world";
   char *f = "olhew r,";
   unsigned int n;

   n = strspn(s, f);
   printf("%u\n", n);
       
   return(0);
}
