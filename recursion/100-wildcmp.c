/**
 * _strlen - calculate string length
 * @s: input string
 *
 * Return: length of string
 */
unsigned long int _strlen(char *s)
{
  if (*s != 0)
    return (1 + _strlen(s + 1));
  return 0;
}
/**
 * _strcmp - compare two strings
 * @s1: input string one
 * @s2: input string two
 *
 * Return: 0 if equal, otherwise posetive number
 */
int _strcmp(char *s1, char *s2, unsigned long int len)
{
  if (len <= 0)
    return 0;
  if (*s1 == *s2)
    return (0 + _strcmp(s1 + 1, s2 + 1));
  return 1;
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
  unsigned long int len1, len2, len;

  len1 = _strlen(s1);
  len2 = _strlen(s2);

  if (len1 >= len2)
    len = len1;
  else
    len = len2;

  if (_strcmp(s1, s2, len) == 0)
    return 1;
  return 0;
}
  
