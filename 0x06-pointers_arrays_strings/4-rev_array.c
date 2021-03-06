/**
 * reverse_array - reverse content of array
 * @a: input array pointer
 * @n: size of array
 *
 */
void reverse_array(int *a, int n)
{
	int end;
	int s;
	int i;

	end = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		s = *(a + i);
		*(a + i) = *(a + end - i);
		*(a + end - i) = s;
	}
}
