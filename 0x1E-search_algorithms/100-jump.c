#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_src - linear search implementation
 * @array: array a value to be searched in
 * @start: start of array to check for the value
 * @end: end of array the value to be checked
 * @value: the value to be searched
 *
 * Return: index of value if exists, otherwise -1
 */
int linear_src(int *array, size_t start, size_t end, int value)
{
	size_t j;

	for (j = start; j < end; j++)
	{
		printf("Value checked array[%ld] = [%d]\n",
		       j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}

/**
 * jump_search - jump search implementation
 * @array: array a value to be searched in
 * @size: size of array
 * @value: the value to be searched
 *
 * Return: index of value if exists, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t k = sqrt(size), i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i += k)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       i - k, i);
			return (linear_src(array, i - k, i, value));
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - k, i);
	return (linear_src(array, i - k, size, value));
}
