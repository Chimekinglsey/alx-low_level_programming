#include "main.h"
/**
 * malloc_checked - checks and allocates memory
 * @b: integer size to allocate
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
int *num;

num = malloc(b * sizeof(unsigned int));
	if (num == NULL)
	{
		exit(98);
	}
return (num);
}
