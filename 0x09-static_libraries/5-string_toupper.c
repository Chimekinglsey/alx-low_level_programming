
#include "main.h"
/**
 *  *string_toupper - a function that converts lowecase to Uppers
 *
 * @s: Pointer to string
 *
 *   * Return: A pointer to the resulting string
 *
 **/
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)

	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s -= 32;
		}
			s++;

	}
		return (start);
}
