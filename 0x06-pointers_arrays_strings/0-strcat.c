/**
 * _strcat - concatinate string
 * @dest: destingation pointer
 * @src: source pointer
 *
 * Retrun: start of destination pointer
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = *src;

	return (p);
}
