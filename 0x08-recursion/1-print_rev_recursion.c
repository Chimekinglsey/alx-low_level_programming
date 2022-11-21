#include "main.h"
/*
 * _print_rev_recursion - a function that prints the  reversed value of s
 *
 * @s: input string
 *
 * Return - nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
