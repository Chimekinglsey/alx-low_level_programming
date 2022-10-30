#include "main.h"
/**
 *  * print_diagonal - prints a given number of line;
 *  @n: number of lines to print
 *   * Return: nothing
 *
 **/
void print_diagonal(int n)
{
int i;
	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else 
		{
		_putchar('\\');
		}
	_putchar('\n');
	}
}

