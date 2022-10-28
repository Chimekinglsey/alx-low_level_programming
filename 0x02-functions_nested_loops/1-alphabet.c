#include "main.h"
/**
 *  * print_alphabet - main prints lowercase
 *
 *   * Return: A pointer to the resulting string
 *
 **/
void print_alphabet(void)
{
char A = 'a';

while (A <= 'z')
{
	_putchar(A);
	A++;
}
_putchar('\n');
}
