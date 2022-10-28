#include "main.h"
/**
 *  * print_alphabet_x10 - main prints lowercase
 *
 *   * Return: A pointer to the resulting string
 *
 **/
void print_alphabet_x10(void)
{
char A = 'a';

while (A <= 'z')
{
	int i;

	for (i = 0; i <= 10; i++)
	{
	_putchar(A);
	}
	A++;
}
_putchar('\n');
}
