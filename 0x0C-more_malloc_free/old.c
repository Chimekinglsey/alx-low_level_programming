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
char *s3;
unsigned int i = 0;

		if (s1 == NULL)
			s1  = "";

		if (s2 == NULL)
			s2 = "";

		s3 = malloc(strlen(s1) + n + 1);

		if (s3 == NULL)
			return (NULL);

		if (n >= (strlen(s2)))
			n = strlen(s2);
		
		while (i < (strlen(s3)))
			{
				if (i < (strlen(s1)))
					{
					s3[i] = s1[i];
					}
				else
					{
				s3[i] = s2[i];
					}
			}
		return (s3);
}
