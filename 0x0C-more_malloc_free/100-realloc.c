#include "main.h"
/**
 * _realloc - reallocates memory
 * @ptr: pointer to old memory
 * @old_size: size of  old memory
 * @new_size: size to reallocate
 * Return: A pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *ptr1, *new_mem;
		ptr1 = ptr;

if (old_size == new_size)
	return (ptr);
if (ptr == NULL)
{
	old_size = new_size;
	ptr = malloc(new_size);
}
if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}
if (new_size > old_size)
{
	new_mem = malloc(new_size);
	for (i = 0; i < old_size; i++)
	{
		new_mem[i] = ptr1[i];
	}
}
free(ptr);
return (new_mem);
}
