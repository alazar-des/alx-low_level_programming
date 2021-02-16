/**
 * _pow - calculate power of a number
 * @x: base
 * @n: exponent
 *
 * Return: result
 */
int _pow(int x, int n)
{
	int y = 1;

	while (n > 0)
	{
		y *= x;
		n--;
	}

	return (y);
}

/**
 * cvt - convert character array to integer
 * @s: a pointer to numbers
 * @dig: number of digits
 * @count: number of '-' counts
 *
 * Return: the converted integer
 */
int cvt(char *s, int dig, int count)
{
	int sum = 0;

	dig--;
	while (dig >= 0)
	{
		sum += (*s - 48) * _pow(10, dig);
		s++;
		dig--;
	}
	if (count % 2 != 0)
		return (-sum);
	return (sum);
}

/**
 * _atoi - convert a string to integer
 * @s: input string
 *
 * Return: if integer is with in string retern the number else 0
 */
int _atoi(char *s)
{
	int dig = 0;
	int count = 0;
	char *p;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			count++;
			s++;
			continue;
		}
		if (*s >= '0' && *s <= '9')
		{
			p = s;
			while (*s >= '0' && *s <= '9')
			{
				dig++;
				s++;
			}
			return (cvt(p, dig, count));
		}
		s++;
	}

	return (0);
}
