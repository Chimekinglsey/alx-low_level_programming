#include "main.h"
/**
 *rev_string - returns the length of a given string
 *@s: string to be reversed
 *Return: returns the length of string
 **/
void rev_string(char *s)
{
	int i = 0;

	int len = 0;

	char aux;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
	_putchar(s[len]);
}
