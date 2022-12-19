#include "variadic_functions.h"
/**
 * print_strings - our function to print strings plus comma
 *  @separator: an ASCII required parameter expected to be ','
 *  @n: required parameter
 *
 *   * Return: always nothing
 *
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	char c, *count, nextvar;

	count = &nextvar;

	va_start(ap, n);

	if (n == 0)
	printf("(nil)");

	for (i = 0; i < n; i++)
	{
		nextvar = va_arg(ap, int);

		for (i = 0; *count != '\0'; i++)
		{
		c = count[i];
		printf("%c", c);
		}

		if (separator != NULL)
		printf("%s ", separator);
	}
	va_end(ap);
}
