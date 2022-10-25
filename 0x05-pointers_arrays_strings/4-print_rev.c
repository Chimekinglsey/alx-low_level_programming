#include "main.h"
/**
 *  * print_rev - checks the input string and prints the reverse order
 *  *@s: pointer to the input string
 *    * Return: Always void
 **/
void print_rev(char *s)
{
	char *len = s;

	while (*len)
	len++;
	len -= 1;
	while (len)
	{
		_putchar(*s);
		len--;
	}
	_putchar('\n');
}
