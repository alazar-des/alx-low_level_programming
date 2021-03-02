#include <stdlib.h>

/**
 * alloc_grid - allocate two dimentional array
 * @width: number of row
 * @height: number of columns
 *
 * Return: pointer to the allocated memory
 */
int **alloc_grid(int width, int height)
{
	int **arr2D;
	int i, j;
	const int sizeof_int = 4;
	const int sizeof_intp = 8;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr2D = malloc(height * sizeof_intp);
	for (i = 0; i < height; i++)
	{
		arr2D[i] = malloc(width * sizeof_int);
		if (arr2D[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			arr2D[i][j] = 0;
	}
	return (arr2D);
}
