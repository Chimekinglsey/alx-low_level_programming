#include "search_algos.h"

/**
* binary_search - a function that searches an array to find a matchindex
* @array: pointer to first element of the array to search in
* @size: the length of the array
* @value: the value to search for
* Return: the index matching the array
*/
int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, mid;

	if (array == NULL || !value)
	return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
		printf("%ld", i);
		if (i < right)
		printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (value == array[mid])
		return (mid);
		else if (value < array[mid])
		right = mid - 1;
		else
		left = mid + 1;
	}

	return (-1);
}
/*
*int binary_search(int *array, size_t size, int value)
*{
*	size_t left, right, mid;
*	if (array == NULL || !value)
*		return (-1);
*	left = 0;
*	right = size;
*	mid = (left + right)/2;
*	while (left < right)
*	{
*		*if (value == array[mid])
*		*	return (mid);*
*		if (value < array[mid])
*		{
*			printf("Searching in array: ");
*			right = mid - 1;
*			for (; left < mid; left++)
*			{
*				printf("%ld", left);
*				if (value == array[mid])
*					return (mid);
*				printf(", ");
*			}
*			printf("\n");
*		}
*		else if (value > array[mid])
*		{
*			printf("Searching in array: ");
*			left = mid + 1;
*			for (; left <= mid; left++)
*			{
*				printf("%ld", left);
*				if (value == array[mid])
*					return (mid);
*				printf(", ");
*			}
*		}
*	}
*	return (0);
*}
*/

