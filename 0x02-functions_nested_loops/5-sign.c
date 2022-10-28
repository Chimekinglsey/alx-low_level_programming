#include "main.h"
/**
 *  * print_sign - main prints lowercase
 *
 *  @n: the intake string
 *
 *   * Return: A pointer to the resulting string
 *
 **/
int print_sign(int n)

{
int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}

	else
	{
		value = -1;
		_putchar('-');
	}


	return (value);
}
