#include "main.h"
/**
 *  * _strcmp - a function that compares two strings.
 *
 *   * @s1: first compare string
 *
 *   * @s2: second input string
 *
 *   * Return: difference btw the strings
 *
 **/
int _strcmp(char *s1, char *s2)
	{
		while (*s1 && *s2)
		{
			if (*s1 != *s2)
			{
				return (*s1 - *s2);
			}

			s1++, s2++;

		}
	return (*s1 - *s2);
	}
