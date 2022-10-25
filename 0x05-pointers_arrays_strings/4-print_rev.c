#include "main.h"
/**
 *  * print_rev - checks the input string and prints the reverse order
 *  *@s: pointer to the input string
 *    * Return: Always void
 **/
void print_rev(char *s)
{
int i;
for (i = '\0'; s[i] <= '\0'; i--)
{
	_putchar(s[i]);
}

}
