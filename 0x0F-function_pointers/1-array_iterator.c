#include "function_pointers.h"

/**
* array_iterator - Function that executes a function given
*		as a parameter on each element of an array.
* @array: pointer to the array
* @size: size of array pointed to
* @action: pointer to function containing action to perform on array
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || size < 1 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
