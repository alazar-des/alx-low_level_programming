/**
 * _islower - check if the character is lowercase
 * @c: character to be checked
 *
 * Return: if c is lowercase 1, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
