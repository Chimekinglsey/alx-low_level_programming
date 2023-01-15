#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: second string
 * @n: an integer extent to concat
 * Return: A pointer to concatenated string memory
 */
 char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, lens1 = strlen(s1), lens2 = strlen(s2);

	if (s1 == NULL)
		s1 = "";


	if (s2 == NULL)
		s2 = "";


	if (n >= lens2)
		n = lens2;

	new_str = malloc(lens1 + n + 1);
	if (new_str == NULL)
		return (NULL);

	for (; i < (lens1 + n); i++)
	{
		if (i < lens1)
			new_str[i] = s1[i];
		else
			new_str[i] = s2[i];
	}
	new_str[i] = '\0';
	return (new_str);
}
