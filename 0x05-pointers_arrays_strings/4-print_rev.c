#include "main.h"
/**
 *  * print_rev - checks the input string and prints the reverse order
 *  *@s: pointer to the input string
 *    * Return: Always void
 **/
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len)

	{
		_putchar(s[--len]);
	}
_putchar('\n');
}
