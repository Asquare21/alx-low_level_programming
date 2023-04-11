#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2 grid
 * @grid: grid to free
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
