#include <stdlib.h>

/**
 * array_iterator - iterate over the input array and call a function given as
 * inut over array elements
 * @array: input array action to be taken to
 * @size: number of elements of the array
 * @action: callback function
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
