#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * gen - generate random uppercase, lowercase or number
 * @c: length of password
 * @pwd: generated password pointer
 *
 */
void gen(int c, char pwd[])
{
	time_t t;
	int s;
	int i = 0;

	srand(time(&t));

	while (i < c)
	{
		s = rand() % 3;
		switch (s)
		{
		case 0:
			pwd[i] = ((rand() % 26) + 65);
			break;
		case 1:
			pwd[i] = ((rand() % 26) + 97);
			break;
		case 2:
			pwd[i] = (rand() % 9) + '0';
			break;
		}
		i++;
	}
}

/**
 * main - generate valid password
 *
 * Return: Always return 0
 */
int main(void)
{
	int len = 12;
	char pwd[12];
	int i = 0;

	gen(len, pwd);
	while (i < len)
	{
		printf("%c", pwd[i]);
		i++;
	}
	printf("\n");

	return (0);
} 

