/**
 * _memset - set a memory with a constant byte
 * @s: memory pointer to be filled
 * @b: the constant byte
 * @n: number of memory
 *
 * Return: string pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*s = b;
		s++;
		i++;
	}
	return (p);
}
