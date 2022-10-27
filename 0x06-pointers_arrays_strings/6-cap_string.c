#include "main.h"
/**
 *  *cap_string - a function that concatenates two strings.
 *
 *   * @s: string to capitalize
 *   * Return: A pointer to the resulting string
 *
 **/
char *cap_string(char *s)
{
int i = 0;
	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] -= 32;
		}

		if (check_seperators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
		{
			s[i + 1] -= 32;
		}

		i++;

	}

		return (s);
}

/**
 *  check_seperators - a function that separates symbols.
 *
 *   * @c: string to capitalize
 *   * Return: Always 0 for Success
 *
 **/
int check_seperators(char c)

{
int i;

char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"',};
char sep2[] = {'(', ')', '{', '}' };
strcat(seperators, sep2);

	for (i = 0; i < 13; i++)
	{
		if (c == seperators[i])
		{
			return (1);
		}
	}
return (0);

}
