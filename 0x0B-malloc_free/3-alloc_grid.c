#include <stdlib.h>
/**
 * alloc_grid - it will allocate a pointer to a 2D array
 * @width: the width of the 2D array
 * @height: the height of the 2D array
 * Return: Pointer to a 2D array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **d_array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	d_array = malloc(sizeof(int *) * width);
	if (d_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		d_array[i] = (int *)malloc(sizeof(int *) * (height -1));
		if (d_array[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			d_array[i][j] = 0;
		}
	}
	return (d_array);
	free(d_array);
}