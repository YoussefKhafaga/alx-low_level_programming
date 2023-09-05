#include "main.h"
/**
 * alloc_grid - allocates a 2d array
 * @width: width of the 2d array
 * @height: number of columns of 2d array
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int **twodarr, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	twodarr = malloc(sizeof(int) * width);
	if (twodarr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		twodarr[i] = malloc(sizeof(int) * height);
		if (twodarr[i] == NULL)
		{
			return (NULL);
		}
	}
	return (twodarr);
}

