#include "main.h"
/**
 *  * puts_half - a function that concatenates two strings.
 *
 *   *@str: the number to concat
 *
 *   * Return: A pointer to the resulting string
 *
 **/
void puts_half(char *str)
{
	int len = 0;
	int i;
	int n;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
	}
		else
		{
			n = (len + 1) / 2;
		}

		for (i = n; i < len; i++)
		{
			_putchar(str[i]);

		}
	_putchar('\n');
}

