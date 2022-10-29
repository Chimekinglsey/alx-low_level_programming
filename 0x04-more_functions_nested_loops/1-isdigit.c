
#include "main.h"
/**
 * _isdigit - checks wether input is digit
 *
 *  @c: The intake string
 *
 *   * Return: 1 for success and 0 for failure
 *
 **/
int _isdigit(int c)
{
int state = 0;
int digit;
	for (digit = 0; digit <= 9; digit++)
	{
		while (c == digit)
		{
		state = 1;
		}
	}
return (state);
}
