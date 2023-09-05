#include "main.h"
#include <string.h>
/**
 * free_grid - function tha frees 2d array
 * @grid: 2d array
 * @height: rows of 2d array
 */
void free_grid(int **grid, int height)
{
	int i;


	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

