#include "main.h"
/**
 * _calloc - allocates memory
 * @nmemb: number of array members
 * @size: size of bytes to allocate
 * Return: A pointer to concatenated string memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, *array;


if (nmemb == 0 || size == 0)
return (NULL);

array = malloc(nmemb * size);
if (array == NULL)
return (NULL);

for (i = 0; i < (nmemb * size); i++)
	*(array + i) = 0;

return (array);
}
