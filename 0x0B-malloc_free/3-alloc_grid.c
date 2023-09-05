#include "main.h"
/**
 * alloc_grid - allocates a 2d array
 * @width: width of the 2d array
 * @height: number of columns of 2d array
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **twodarr, j, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twodarr = malloc(sizeof(int) * height);
	if (twodarr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		twodarr[i] = malloc(sizeof(int) * width);
		if (twodarr[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			twodarr[i][j] = 0;
		}
	}
	return (twodarr);
}

