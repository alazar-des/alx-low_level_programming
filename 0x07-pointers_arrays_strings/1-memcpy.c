/**
 * _memcpy - copy form source memory to destination
 * @dest: destination memory address
 * @src: source memory address
 * @n: number memory to be copied
 *
 * Return: destination memory pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
