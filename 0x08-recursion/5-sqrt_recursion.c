/**
 * _sqrt - compute squrare root of a number
 * @n: number to be computed
 * @i: start check
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
	r = _sqrt(n, n / 2);
	if (r > 0)
		return (r);
	return (-1);
}
