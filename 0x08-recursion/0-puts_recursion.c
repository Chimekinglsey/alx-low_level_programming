#include "main.h"
/**
 *  *_puts_recursion - a function that prints the  value of s
 *
 * @s: Pointer to string
 *
 *   * Return: nothing
 *
 **/
void _puts_recursion(char *s)
{
	{
	char str;

	str = *s;
	if (str != '\0')
	{
	_putchar(str);
	str++;
	}
	}

_putchar('\n');
}

