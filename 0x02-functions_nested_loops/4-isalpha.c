#include "main.h"
/**
 *  * _isalpha - main prints lowercase
 *
 *  @c: the integer to convert
 *
 *   * Return: A pointer to the resulting string
 *
 **/
int _isalpha(int c)

{

char lower, upper;

int isletter = 0;


	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)

		{
			if (c == lower || c == upper)
			isletter = 1;
		}
										}
	return (isletter);
}
