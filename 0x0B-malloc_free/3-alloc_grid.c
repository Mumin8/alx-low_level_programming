#include <stdio.h>
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
	d_array = malloc(sizeof(int *) * (height));
	if (d_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		d_array[i] = malloc(sizeof(int) * width);
		if (d_array[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(d_array[i]);
			}
			free(d_array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			d_array[i][j] = 0;
		}
	}
	return (d_array);
}
