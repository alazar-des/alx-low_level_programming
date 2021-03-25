#include <stdlib.h>

/**
 * pow2 - calculate 2 the power of nth
 * @n: the exponent
 *
 * Return: result of 2 the power of n
 */
unsigned int pow2(unsigned int n)
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
 * binary_to_uint - change decimal to binary
 * @b: decimal input
 *
 * Return: 0 if b is NULL or contains other than 0 or 1, otherwise binary
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int d, len, i;

	if (b == NULL)
		return (0);
	len = 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
		len++;
	}
	b--;
	i = 0, d = 0;
	while (i < len)
	{
		if (*b == '1')
			d += pow2(i);
		i++;
		b--;
	}
	return (d);
}
