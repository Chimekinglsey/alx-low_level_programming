#include "function_pointers.h"

/*
* print_name - a function that prints name passed
* @name: name to print
* @f: pointer to function containing name
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
/*
- we have to get stringlength of name and print it
- we have to print the content of the function pointer first before the name
*/
int i, len_name = 0;
while(name)
len_name++;

if (f == NULL)
_putchar(' ');

if (name == NULL)
_putchar(' ');

for (i = 0; i < len_name; i++)
	{
		_putchar(name[i]);
	}
}
