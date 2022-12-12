#include "main.h"
/**
 *  * _isupper - checks wether an alphabet is Upper
 *
 *  @c: The intake string
 *
 *   * Return: 1 for success and 0 for failure
 *
 **/
int _isupper(int c)
{
int state = 0;
char upper;
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
		state = 1;
		}
	}
return (state);
}
