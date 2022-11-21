#include "main.h"
/**
 *  *_strlen_recursion - a function that prints the length of s
 *
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
		return (i);
	return (_strlen_recursion(s + 1));
	}
return (0);
}
