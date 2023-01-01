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
(void) height;
free(grid);
}
