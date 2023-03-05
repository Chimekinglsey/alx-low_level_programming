#include "function_pointers.h"

/**
* int_index - a function that searches for an integer.
*	-returns the index of the first element which cmp() does
*		not return 0 or -1 if no element matches.
* @array: pointer to the array to search from
* @size: size of array (number of elements).
* @cmp: pointer to the function to be used to compare values
* Return: Nothing.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
if (result == 0)
return (-1);
return (result);
}
