/**
 * _isalpha - check for alphabet character
 * @c: The character to check
 *
 * Return: if c is letter 1, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
