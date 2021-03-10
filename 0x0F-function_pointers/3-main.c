#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - program entry point
 * Description - perform simple mathimatical operation
 * @argc: number of input arguments
 * @argv: pointer to the input arguments
 *
 * Return: result of the operation on success, otherwise exit
 */
int main(int argc, char *argv[])
{
	char p, l;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = argv[2][0];
	l = argv[2][1];
	if (l != '\0' || !(p == '+' || p == '-' || p == '*' || p == '/' || p == '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((p == '/' || p == '%') && (atoi(argv[3]) == 0))
	{
		printf("Error\n");
		exit(100);
	}

	fun = get_op_func(argv[2]);
	printf("%d\n", fun(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
