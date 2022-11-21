#include "main.h"
/**
*  _strlen_recursion - a function that returns the length of a string.
 * @s: Pointer to string
 *
 *   * Return: string length of s
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
	return (i + _strlen_recursion(s + 1));
	}
return (0);
}
