
#include "main.h"
/**
 *  * print_square - prints a given number of line;
 *  @size: square to print
 *   * Return: image
 *
 **/
void print_square(int size)
{
int i;
	for (i = 0; i < size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		_putchar('#');
	}
	_putchar('\n');
}
