#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * Description: display error in standard errout
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fprintf(stderr, "%s\n", str);
	return (1);
}
