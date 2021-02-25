/**
 * count_dig - count the digit of a number
 * @n: input number
 *
 * Return: number of digits
 */
int count_dig(int n)
{
	if (n / 10 > 0)
		return (1 + count_dig(n / 10));
	return (1);
}

/**
 * _pow - calculate x pow of y
 * @x: base
 * @y: exponent
 *
 * Return: result
 */
int _pow(int x, int y)
{
	if (y <= 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * init_num - generate initial number to check squareroot
 * @n: input number
 *
 * Return: initial number
 */
int init_num(int n)
{
	int c;

	c = count_dig(n);
	if (n % 2 == 0)
		return (_pow(10, c / 2) - 1);
	else
		return (_pow(10, c / 2) * 2);
}

/**
 * _sqrt - compute squrare root of a number
 * @n: number to be computed
 * @i: intital number for check start
 *
 * Return: square root if natural number existed otherwise 0
 */
int _sqrt(int n, int i)
{
	if (n == i * i)
		return (i);
	if (i > 1)
		return (_sqrt(n, i - 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input number
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	int r;

	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	r = init_num(n);
	return (_sqrt(n, r));
}
