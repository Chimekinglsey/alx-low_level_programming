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
	size_t a = 0, b = 0, step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (b < size && array[b] < value)
	{
		a = b;
		b += step;
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", a, b);

	while (a < b)
	{
		printf("Value checked array[%lu] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
		a++;
	}

	return (-1);
}

/*
*{
*	size_t start = 0, end = sqrt(size), i;
*
*	if (array == NULL || !value)
*	{
*		return (-1);
*	}
*	while (array[end] < value && start < size)
*	{
*		start = end;
*		end = end + sqrt(size);
*		if (end > size - 1)
*			end = size;
*		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
*	}
*
*	for (i = start; i < end; i++)
*	{
*
*		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
*		if (array[i] == value)
*			return (i);
*	}
*	return (-1);
*
*}
*/
