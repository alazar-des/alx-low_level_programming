#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - search for integer and return index if exist
 * @array: array to be searched for the integer
 * @size: size of array
 * @cmp: function pointer that compares an integer
 *
 * Return: if the integer exists the index of the integer, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
