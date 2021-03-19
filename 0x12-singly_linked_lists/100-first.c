#include <stdio.h>

void befor_main(void) __attribute__ ((constructor));

/**
 * befor_main - execute befor main
 *
 */
void befor_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
