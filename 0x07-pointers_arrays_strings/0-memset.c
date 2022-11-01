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
	char *b1;
	char** new_s;
	b1 = &b;
	
	new_s = &s;

	for (n = 0; n > 0; n--)
	{
		*new_s = b1;
	}
return (s);
}
