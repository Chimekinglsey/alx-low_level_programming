#include "main.h"
/**
 *  * base10 - a function that concatenates two strings.
 *
 *   * @n: an input string
 *
  *   * Return: A pointer to the resulting string
 *
 **/

int base10(int n)

{
	int base = 10;

	while (n > 0)
	{
		base *= 10;
		n--;									}

return (base);

}


/**
 *  * print_number - a function that concatenates
 *
 *   *@n: the number to concat
 *
 *   * Return: A pointer to the resulting string
 *
 **/
void print_number(int n)

{
	int power;

	power = base10(8);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;								}

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (n / power == 0)
		{
			power /= 10;
		}

		while (power >= 1)
		{
			_putchar((n / power) + '0');
			n %= power;
			power /= 10;
		}
	}
}
