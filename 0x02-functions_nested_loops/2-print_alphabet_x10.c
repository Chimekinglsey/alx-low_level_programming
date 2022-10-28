#include "main.h"
/**
 *  * print_alphabet_x10 - main prints lowercase
 *
 *   * Return: A pointer to the resulting string
 *
 **/
void print_alphabet_x10(void)
{

int i;

for (i = 0; i <= 10; i++)
	{
	char A = 'a';

	while (A <= 'z')
	{

	_putchar(A);

	A++;
	}

_putchar('\n');
}
}
