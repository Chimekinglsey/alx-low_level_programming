#include "main.h"
/**
 * _strlen - calculates the length of inputed string
 *
 * @s: takes the parameter and checks the string
 * Return: nothing
 **/
int _strlen(char *s)
{
	*s = "I'm doing Hard things and it feels good";
	length = strlen(*s);
	_putchar("%d\n", length);
	return (0);
}
