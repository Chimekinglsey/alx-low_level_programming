#include "main.h"
/**
 * _strdup - A function that returns its argument,
 * if initialized with specific char.
 * @str: The size of the array
 * Return: Apointer to the char which is a dup or NULL if it fails
 */

char *_strdup(char *str)
{
int i = 0;
char *s;
int len;
len = strlen(str);

s = (char *)malloc(sizeof(char));

if (str == NULL)
return (NULL);

if (s == NULL || s == 0)
return (NULL);

while (i < len)
	{
	s[i] = str[i];
	i++;
	}
return (s);
}
