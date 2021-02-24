/**
 * _strlen_recursion - return length of string
 * @s: input string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(++s));
	return (0);
}
