/**
 * _strlen - calculate string length
 * @str: input string
 *
 * Return: string length
 */
unsigned long int _strlen(char *str)
{
  if (*str != 0)
    return ( 1 + _strlen(str + 1));
  return 0;
}

/**
 * _substract - substract the begining and the end string
 * @str: input string
 * @len: length of string
 * @i: substraction starting point
 *
 * Return: the result
 */
int _substract(char *str, unsigned long int len, unsigned long int i)
{
  if (i < len / 2)
    {
      if (str[i] == str[len - 1 - i])
	return (0 + _substract((str + 1), len - 2, i + 1));
      else
	return 1;
    }
  return 0;
}
 
/**
 * is_palindrome - check if string is palindrome
 * @s: input string
 *
 * Return: if palindrome 1, otherwise 0
 */
int is_palindrome(char *s)
{
  unsigned long int len;
  unsigned long int i;

  i = 0;
  len = _strlen(s);
  
  if (_substract(s, len, i) == 0)
    return 1;
  else
    return 0;
}
