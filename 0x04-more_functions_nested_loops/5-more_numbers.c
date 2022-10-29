
#include "main.h"
/**
 *  * more_numbers - prints 0-14 in 10 different line;
 *   * Return: nothing
 *
 **/
void more_numbers(void)
{
int num;
int counter = 0;
while (counter <= 10)
{
for (num = 0; num <= 14; num++)
	{
	_putchar('0' + num);
	}
	_putchar('\n');
}
_putchar('\n');
counter++;
}
