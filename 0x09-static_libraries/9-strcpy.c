/**
 * _strcpy - copy string from source to destination
 * @src: source pointer from which to be copied
 * @dest: destination pointer to which to be copied
 *
 * Return: destination pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *dst = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;

	return (dst);
}
