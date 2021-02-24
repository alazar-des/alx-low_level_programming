/**
 * is_div - check if number is dividable
 * @n: numerator
 * @i: denomenator
 *
 * Return: if dividable return 0, otherwise 1
 */
int is_div(int n, int i)
{
	if (i < 2)
		return (1);
	if (n % i)
		return (1 * (is_div(n, i - 1)));
	else
		return (0);
}

/**
 * is_prime_number - check if a number is prime
 * @n: input number to be checked
 *
 * Return: if prime 1, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n > 0 && n <= 2)
		return (1);

	if (is_div(n, n / 2))
		return (1);
	return (0);
}
