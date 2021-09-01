#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - implementation of binary search
 * @array: array to be searched in
 * @size: size of array
 * @value: the value to be searched for
 *
 * Return: index of value if exists, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, i, mid;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array:");
		for (i = left; i <= right; i++)
			printf(" %d", array[i]);
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
