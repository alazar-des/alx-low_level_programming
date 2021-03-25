/**
 * count_digit - count the number of digits on a decimal number
 * @n: decimal input
 *
 * Return: digits
 */
int count_digit(unsigned long int n)
{
	unsigned long int _b10;
	int len;

	_b10 = 10;
	len = 1;
	while (n > _b10)
	{
		if (len >= 20)
			return (20);
		_b10 *= 10;
		len++;
	}
	return (len);
}

/**
 * get_bit - prints binary number in decimal format
 * @n: decimal input
 * @index: the index of the bit to be returned
 *
 * Return: the bit at the index if index is in range, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int len, i, lp;
	unsigned long int ip;
	unsigned int count;

	count = 0;
	if (n == 0)
	{
		if (index == 0)
			return (0);
		else
			return (-1);
	}
	else
	{
		len = count_digit(n);
		len *= 4;
		lp = 0;
		count = len;
		while (lp < len)
		{
			ip = n;
			i = (ip >> (len - lp - 1)) & 1;
			count--;
			if (count == index)
				return (i);
			lp++;
		}
	}
	return (-1);
}
