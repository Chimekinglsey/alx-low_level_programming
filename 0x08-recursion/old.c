#include "main.h"
/**
 *  *_puts_recursion - a function that prints the  value of s
 *
 * @s: Pointer to string
 *
 *   * Return: nothing
 *
 **/
char rec(char *s);
void _puts_recursion(char *s)
{
	{
	char str;

	str = *s;
	if (str != '\0')
	{
		rec(s);
	}

_putchar('\n');
}

void rec(char *s)
	{
	char res;

	res = rec(s);
	_putchar(res);
	
	}

