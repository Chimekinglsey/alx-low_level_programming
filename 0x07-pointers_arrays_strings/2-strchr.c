#include "main.h"
/**
 *  *_strchr - a function that sets a value to s
 *
 * @s: Pointer to string
 * @c: the new value to search
 *   * Return: A pointer to the resulting string
 *
 **/
char *_strchr(char *s, char c)
{
	char caps[27] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char small[27] = {"abcdefghijklmnopqrstuvwxyz"};
	int i;

	for (i = 0; i < 27; i++)
	{
		if ((c != caps[i]) || (c != small[i]))
		{
			s = NULL;
		}
		else if (c == caps[i])
		{
			s = &caps[i];
		}
		else if (c == small[i])
		{
			s = &small[i];
		}	
	}
return (s);
}
