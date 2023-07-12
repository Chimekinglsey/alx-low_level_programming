#include "search_algos.h"
#include <math.h>

/**
* jump_search - a function that searches an array to find a matchindex
* @array: pointer to first element of the array to search in
* @size: the length of the array
* @value: the value to search for
* Return: the index matching the array
*/
int jump_search(int *array, size_t size, int value)
{
	size_t start = 0, end = sqrt(size), i;

	if (array == NULL || !value)
	{
		return (-1);
	}
	while (array[end] < value && start < size)
	{
		start = end;
		end = end + sqrt(size);
		if (end > size - 1)
			end = size;
	}

	for (i = start; i < end; i++)
	{

		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
