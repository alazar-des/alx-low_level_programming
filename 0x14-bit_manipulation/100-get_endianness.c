/**
 * get_endianness - check if computer architecture is big or little endian
 *
 * Return: 0 if big endian, 1 otherwise
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 0x01234567;
	c = (char *) &x;
	if (*c == 0x01)
		return (0);
	else
		return (1);
}
