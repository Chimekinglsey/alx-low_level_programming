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
	int i, w, h;
	int *ar, **temp;

	w = width;
	h = height;

	ar = (int *) malloc((w * h) * (sizeof(int)));
	temp = &ar;

	if (ar == NULL)
	return (NULL);

	if ((w <= 0) || (h <= 0))
		return (NULL);

	for (i = 0; i < h; i++)
	{
		for (i = 0; i < w; i++)
		{
			ar[i] = 0;
		}
		_putchar('\n');
	}
	return (temp);
}
