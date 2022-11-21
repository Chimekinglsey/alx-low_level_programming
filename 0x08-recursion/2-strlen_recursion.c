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
	int i = 1;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
	}
	return (i);
}
