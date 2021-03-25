/**
 * count_digit - count the number of digits on a decimal number
 * @n: decimal input
 *
 * Return: digits
 */
unsigned int count_digit(unsigned long int n)
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
 * flip_bits - count how many bits should a number flip to change to the second
 * number
 * @n: first number
 * @m: second number
 *
 * Return: number of bits should be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int len, lenn, lenm, flip;
	unsigned long int lp, ipn, ipm;

	lenn = count_digit(n);
	lenm = count_digit(m);
	len = lenn >= lenm ? lenn : lenm;
	len *= 4;
	lp = 0;
	flip = 0;
	while (lp < len)
	{
		ipn = n;
		ipm = m;
		ipn = (ipn >> (len - lp - 1)) & 1;
		ipm = (ipm >> (len - lp - 1)) & 1;
		if ((ipn ^ ipm) == 1)
			flip++;
		lp++;
	}
	return (flip);
}
