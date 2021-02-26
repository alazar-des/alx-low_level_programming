/**
 * _isupper - check if c is an uppercase
 * @c: input intiger
 *
 * Return: if intiger 1, else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
