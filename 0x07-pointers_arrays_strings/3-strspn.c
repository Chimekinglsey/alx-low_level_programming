#include "main.h"
/**
 *  *_strspn - a function that sets a value to s
 *
 * @s: Pointer to destination string
 *
 * @accept: the character string to check
 *   * Return: String length
 *
 **/
unsigned int _strspn(char *s, char *accept)
{
int string_length = 0;
int strlen_s = strlen(s);
int i;
int j;

	for (i = 0; i < strlen_s; i++)
	{
		for (j = 0; j < 1; j++)
		{
		if (accept[j] == s[i])
		{
			string_length++;
			break;
		}
		else
		{
		continue;
		}
		}
	}
return (string_length);
}
