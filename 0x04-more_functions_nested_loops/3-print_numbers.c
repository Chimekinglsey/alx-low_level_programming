
#include "main.h"
/**
 *  * print_numbers - prints 0-9;
 *   * Return: nothing
 *
 **/
void print_numbers(void)
{
char upper;
	for (upper = '0'; upper <= '9'; upper++)
	{
		_putchar(upper);
	}
	_putchar('0' + '\n');
}
