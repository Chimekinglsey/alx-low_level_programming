
#include "main.h"
/**
 *  *_strstr - a function that sets a value to s
 *
 * @haystack: Pointer to destination string
 *
 * @needle: the character string to check
 *   * Return: String pointer to haystack value
 *
 **/
char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
