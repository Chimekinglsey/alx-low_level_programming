#include "main.h"

/*
* *create_array - creates an array of characters defined by main
*
* @size: input size of characters.
*
* @c: the characters to store in the array.
*
* Return - a character pointer.
*/

char *create_array(unsigned int size, char c)
{
char *mychar;
unsigned int i;

mychar = (char *) malloc((size + 1)  * sizeof(char));

if (mychar == NULL)
return (NULL);

if (size == 0)
return (NULL);

for (i = 0; i < size; i++)
	{
	mychar[i] = c;
	}
for (i = 0; i < size; i++)
	{
	_putchar(mychar[i]);
	}
return (0);
}
