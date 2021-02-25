/**
 * inc_char - increment pointer tile the character is not *
 * @s: input string
 *
 * Return: character pointer
 */
int inc_char(char *s)
{
	if (*s == '*')
		return (1 + inc_char(s + 1));
	return (0);
}

/**
 * rtn_pointer - return pointer
 * @s: input string
 * @c: character to compare with
 *
 * Return: pointer difference
 */
int rtn_pointer(char *s, char c)
{
	if (*s != c)
		return (1 + rtn_pointer(s - 1, c));
	return (0);
}

/**
 * inc_eql - increament untile with character is equal
 * @s: input string
 * @c: input character to compare with
 *
 * Return: when equal string pointer
 */
char *inc_eql(char *s, char c)
{
	if (*s != '\0')
		return (inc_eql(++s, c));

	return (s - rtn_pointer(s, c));
}

/**
 * _strcmp - compare two strings
 * @s1: input string one
 * @s2: input string two
 *
 * Return: 0 if equal, otherwise posetive number
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	if (*s1 == '*')
	{
		s1 += inc_char(s1);
		if (s1 == '\0')
			return (0);
		if (*s2 != '\0')
			s2 = inc_eql(s2, *s1);
	}
	if (*s2 == '*')
	{
	s2 += inc_char(s2);
	if (*s2 == '\0')
		return (0);
	if (*s1 != '\0')
		s1 = inc_eql(s1, *s2);
	}
	if (*s1 == *s2)
		return (0 + _strcmp(s1 + 1, s2 + 1));
	return (1);
}

/**
 * wildcmp - compare two strings if they are identical
 * @s1: first input string
 * @s2: second input string
 *
 * Return: if identical 1, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (_strcmp(s1, s2) == 0)
		return (1);
	return (0);
}
