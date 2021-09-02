#include "search_algos.h"

/**
 * interpolation_recursive - interpolation search implementation
 * @array: an array which a value will be searched in
 * @lo: begining of array index
 * @hi: end index of array to be searched
 * @value: a value to be searched
 *
 * Return: index of the value if exists, otherwise -1
 */
int interpolation_recursive(int *array, size_t lo, size_t hi, int value)
{
	size_t pos;

	pos = lo + ((value - array[lo]) * (hi - lo)
			   / (array[hi] - array[lo]));
	if (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] > value)
			return (interpolation_recursive(array, lo, pos, value));
		else
			return (interpolation_recursive(array, pos, hi, value));
	}
	else
		printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

/**
 * interpolation_search - interpolation search implementation
 * @array: an array which a value will be searched in
 * @size: size of array
 * @value: a value to be searched
 *
 * Return: index of the value if exists, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	if (size == 1)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}
	return (interpolation_recursive(array, 0, size - 1, value));
}
