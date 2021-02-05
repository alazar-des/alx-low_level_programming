#include <stdlib.h>
#include <time.h>
/* standard library for input output */
#include <stdio.h>
/* print a number whether it is positive negatice or zero */
int main(void)
{

	int n; 

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
else
printf("%d is negative\n", n);

return (0);
}
