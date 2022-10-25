#include "main.h"
/**
 * _strlen - returns the length of a given string
 *
 * @s: string whose length is to be evaluated
 * Return: returns the length of string
 */
int _strlen(char *5)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
return (i);
}
}
/**
 *
 *  * rev_string - returns the length of a given string
 *    * @s: string to be reversed
 *     * Return: returns the length of string
 **/
void rev_string(char *s)
{
	int i;
	int len;
	char a;
	char z;
	len = _strlen(s) - 1;
	i = 0; 
	while (i < len)
	{
		a = s[i];
		z = s[len];
		s[i++] = z;
		s[len--] = a;
	}	
