#include "main.h"
/**
 *  * _islower - main prints lowercase
 *
 * @c: intake parameter
 *   * Return: A pointer to the resulting string
 *
 **/
int _islower(int c)

{
char i;
int lower = 0;

for (i = 'a'; i <= 'z'; i++)
{
	if (i == c)
	{
	lower = 1;
	}

}
	return (lower);

}
