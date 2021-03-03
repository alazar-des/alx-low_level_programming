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
	
	if (width <= 0 || height <= 0)
		return (NULL);
	arr2D = malloc(height * sizeof(int *));
	if (arr2D == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr2D[i] = malloc(width * sizeof(int));
		if (arr2D[i] == NULL)
		{
			while (i >= 0)
				free(arr2D[--i]);
			free(arr2D);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr2D[i][j] = 0;
	}
	return (arr2D);
}
