#include "main.h"
/**
 * create_array - A function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: A character to initialized the array
 * Return: Apointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
char *mychar;
unsigned int i;

mychar = (char *) malloc(size  * sizeof(char));

if (mychar == NULL)
return (NULL);

if (size == 0)
return (NULL);

for (i = 0; i < size; i++)
	{
	mychar[i] = c;
	}
return (mychar);
}
