/**
 * swap_int - swap a value of two integers
 * @a: first integer input
 * @b: second integer input
 *
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
