/**
 * _cptz - capitalize if lowercase
 * @c: input character
 *
 */
void _cptz(char *c)
{
	if (*c >= 97 && *c <= 122)
		*c -= 32;
}

/**
 * cap_string - capitalize all words of string
 * @str: input string
 *
 * Return: string pointer
 */
char *cap_string(char *str)
{
	char *p = str;

	while (*str != '\0')
	{
		switch (*str)
		{
		case ' ':
			_cptz(++str);
			break;
		case '\n':
			_cptz(++str);
			break;
		case '\t':
			_cptz(++str);
			break;
		case ',':
			_cptz(++str);
			break;
		case ';':
			_cptz(++str);
			break;
		case '.':
			_cptz(++str);
			break;
		case '!':
			_cptz(++str);
			break;
		case '"':
			_cptz(++str);
			break;
		case '?':
			_cptz(++str);
			break;
		case '{':
			_cptz(++str);
			break;
		case '}':
			_cptz(++str);
			break;
		case '(':
			_cptz(++str);
			break;
		case ')':
			_cptz(++str);
			break;
		default:
			str++;
		}
	}

	return (p);
}
