/**
 * set_string - set string value
 * @s: pointer to string pointer
 * @to: pointer string to set value
 *
 */
void set_string(char **s, char *to)
{
	int i;
	char *p;

	p = *s;
	i = 0;
	while (to[i] != '\0')
	{
		p[i] = to[i];
		i++;
	}
}
