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
	if (*s)
	_putchar(*s);
	_puts_recursion(s + 1);
	}

_putchar('\n');
}
