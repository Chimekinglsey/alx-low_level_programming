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
	/**
	*char *new_s;
	*new_s = s;
	*/
	_memset(s, b, n * sizeof(char));
return (s);
}
