#include "main.h"
/**
 *  *_memset - a function that sets a value to s
 *
 * @s: Pointer to string
 * @b: the new value
 * @n: the number of bytes to set
 *   * Return: A pointer to the resulting string
 *
 **/
char *_memset(char *s, char b, unsigned int n)
{

	for (n = 0; n > 0; n--)
	{
		*s = b;
		s = s + 1;
	}
return (s);
}
