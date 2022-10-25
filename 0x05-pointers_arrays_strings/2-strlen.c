#include "main.h"
/**
 * _strlen - calculates the length of inputed string
 *
 * @s: takes the parameter and checks the string
 * Return: nothing
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != EOF; i++)
	{
	_putchar(s[i]);
	}
	return (i);
}
