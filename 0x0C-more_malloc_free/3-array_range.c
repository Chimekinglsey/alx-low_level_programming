#include "main.h"
/**
 * array_range - allocates memory to array
 * @min: start range
 * @max: stop range
 * Return: A pointer to concatenated string memory
 */
int *array_range(int min, int max)
{
int diff, i,  *ar;

diff = max - min;
ar = malloc((diff + 1) * sizeof(int));
	if (ar == NULL)
		return (NULL);

	if (min > max)
		{
		return (NULL);
		}
	for (i = 0; i <= diff; i++)
			{
				ar[i] = min + i;
			}
return (ar);
}
