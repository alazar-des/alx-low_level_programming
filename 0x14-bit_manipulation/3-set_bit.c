#include <stdio.h>

/**
 * pow_2 - calculate 2 the power of n
 * @n: the exponent
 *
 * Return: result of 2 the power of n
 */
unsigned int pow_2(unsigned int n)
{
	unsigned int p;

	p = 1;
	while (n > 0)
	{
		p *= 2;
		n--;
	}
	return (p);
}

/**
 * set_bit - set 1 to the bit at a given index
 * @n: input number
 * @index: the index 1 to be set
 *
 * Return: 1 if successful otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = (*n | pow_2(index));
	return (1);
}
