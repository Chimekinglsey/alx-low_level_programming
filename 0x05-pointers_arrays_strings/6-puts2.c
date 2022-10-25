#include "main.h"
/**
 * puts2 - function that prints every string
 *
 * @str: the string to be printed
 * Return: nothing
 */
void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
	if (i % 2 == 2)
	{
	_putchar(str[i]);
	}
	else if (i % 2 != 1)
	{
		_putchar(str[i]);
	}
	else
	{
	/*
	 * _putchar(str[i]);
	 */
	}

_putchar('\n');
}
}
