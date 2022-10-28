#include "main.h"
/**
 *  * main - Entry point
 *
 *   * Return: nothing
 **/
int main(void)
{
char put[7] = "putchar";

int i;
for (i = 0; i < 8; i++)
{
	_putchar('_');
	_putchar(put[i]);
}
_putchar('\n');
return (0);
}
