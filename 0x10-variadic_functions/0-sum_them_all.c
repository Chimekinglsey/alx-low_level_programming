#include "variadic_functions.h"
/**
 * sum_them_all - our function to add all intakes
 *
 *  @n: required parameter
 *
 *   * Return: An integer
 *
 **/
int sum_them_all(const unsigned int n, ...)
{

	va_list add;
	unsigned int i;
	int count = 0;

	va_start(add, n);

	if (n == 0)
	return (0);

	for (i = 0; i < n; i++)
	count += va_arg(add, int);

	va_end(add);
return (count);
}
