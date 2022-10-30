
#include "main.h"
/**
 *  * more_numbers - prints 0-14 in 10 different line;
 *   * Return: nothing
 *
 **/
void more_numbers(void)
{
int num;
int counter;
for (counter = 0; counter <= 10; counter++)
{
	for (num = 0; num <= 14; num++)
	{
		_putchar('0' + num);
	}
_putchar('\n');
}
}
