#include "main.h"
/**
 * alloc_grid - A function that creates a 2D array,
 * and return a pointer to the created array
 * @width: width of the array
 * @height: array height
 * Return: pointer to arrray
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	array = (int **) malloc(height * sizeof(int *));

	if (array == NULL)
	return (NULL);

	if ((width <= 0) || (height <= 0))
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
		for (i = 0; i < height; i++)
		{
			for (; j < width; j++)
			array[i][j] = 0;
		}

	return (array);
}
