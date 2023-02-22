#include "main.h"
/**
 * free_grid - A function that creates a 2D array,
 * and return a pointer to the created array
 * @grid: pointer to grid
 * @height: array height
 * Return: pointer to arrray
 */
void free_grid(int **grid, int height)
{
int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
