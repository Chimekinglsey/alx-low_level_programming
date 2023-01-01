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
	char *newv, *newv2, *dups1, *dups2, *sum;
	int i, len1, len2, len3;

	len1 = strlen(s1);
	len2 = strlen(s2);
	len3 = len1 + len2;

	dups1 = s1;
	dups2 = s2;


	newv = (char *) malloc((len1) * sizeof(char));
	newv2 = (char *) malloc((len2) * sizeof(char));


	for (i = 0; i < len1; i++)
	{
		dups1[i] = newv[i];
	}
	for (i = 0; i < len2; i++)
	{
		dups2[i] = newv2[i];
	}


	sum = (char *) malloc(len3 * sizeof(char));
	for (i = 0; i < len1; i++)
	{
	sum[i] = s1[i];
	}
	for (; i >= len1 - 1; i++)
	{
		if (i > (len1 - 1) && i <= len2)
		{
		sum[i] = s2[i];
		}
	}
	return (sum);
}
