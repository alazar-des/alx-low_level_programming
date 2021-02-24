/**
 * _incrmt - increment pointer tile the character is not *
 * @s: input string
 *
 * Return: character pointer
 */
char *_incrmt(char *s)
{
	if (*s == '*')
		_incrmt(s + 1);
	return (s);
}

/**
 * _srcheql - search character untile equal character
 * @s1: string one
 * @c: string two
 *
 * Return: pointer of the string
 */
char *_srcheql(char *s, char c)
{
	if (*s == '\0')
		return (s);
	if (*s != c)
		_srcheql(s + 1, c);
	return (s);
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
		if (_incrmt(s1) == '\0')
			return 0;
		if (*s2 == '*')
		{
			if(_incrmt(s2) == '\0')
				return (0);
		}
		else
			_srcheql(s2, *s1);
	}
	if (*s2 == '*')
	{
		if (_incrmt(s2) == '\0')
			return (0);
		_srcheql(s1, *s2);
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
    return 1;
  return 0;
}
  
