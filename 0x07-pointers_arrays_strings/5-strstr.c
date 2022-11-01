
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
int string_length = 0;
int str1 = strlen(haystack);
int i;
int j;
char *hay;
char *ptr = NULL;
	for (i = 0; i < str1; i++)
	{
		for (j = 0; j < 1; j++)
		{
		if (needle[j] == haystack[i])
		{
			string_length++;
			hay = &haystack[string_length++];
			ptr = *&hay;
			break;
		}
		else
		{
		continue;
		}
		}
	}

	return (ptr);
}
