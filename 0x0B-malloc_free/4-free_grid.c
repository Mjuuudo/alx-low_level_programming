#include "main.h"
/**
 * free_grid - fn entry
 * @grid: grid
 * @height: height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height ; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
