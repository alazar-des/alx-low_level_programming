/**
 * _isdigit - checks if input is digit
 * @c: input to be checked
 *
 * Return: if digit 1, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
