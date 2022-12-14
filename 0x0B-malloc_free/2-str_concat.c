#include "main.h"
/**
 * str_concat - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *sum, *joined;
	int i, len1, len2, len3;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + len2 + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	sum = (char *) malloc(len3 * sizeof(char));
	joined = sum;
	if (sum == NULL)
	return (NULL);

	for (i = 0; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			sum[i] = *(s1 + i);
		}
		else
		{
			sum[i] = *s2;
			s2++;
		}
	}
	sum[i] = '\0';
	return (joined);
}
