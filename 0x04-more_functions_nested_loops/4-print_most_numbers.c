#include "main.h"
/**
 *  * print_most_numbers - prints 0-9;
 *   * Return: nothing
 *
 **/
void print_most_numbers(void)
{
char upper;
	for (upper = '0'; upper <= '9'; upper++)
	{
		if (upper !== 2 && upper != 4)
		{
		_putchar(upper);
		}
	}
	_putchar('\n');
}
