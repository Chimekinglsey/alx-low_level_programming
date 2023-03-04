#include "function_pointers.h"

/**
* print_name - Function that passes name to its function parameter.
* @name: name to print
* @f: pointer to function containing name
* Return: Nothing.
*/
void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;

	f(name);
}
