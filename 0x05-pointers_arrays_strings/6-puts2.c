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
	_putchar(str[i]);
}
}
