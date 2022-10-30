#include "main.h"
/**
 *  * print_triangle - prints a given number of line;
 *  @size: square to print
 *   * Return: image
 *
 **/
void print_triangle(int size)
{
int i;
int j;
int n;
n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		{
			_putchar('\n');
		}
}
