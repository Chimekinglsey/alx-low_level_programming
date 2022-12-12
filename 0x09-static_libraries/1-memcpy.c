
#include "main.h"
/**
 *  *_memcpy - a function that copies from src to destination
 *
 * @dest: Pointer to destination string
 * @src: the origin to be copied
 * @n: the number of bytes to copy
 *   * Return: A pointer to the destination
 *
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
	dest[i] = src[i];
	i++;
	n--;
	}
return (dest);
}
