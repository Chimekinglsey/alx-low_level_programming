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
	unsigned int i = 0;
	int count;
	int total = 0;

	va_start(add, n);

	if (n == 0)
	return (0);

		else
		{
			while (i > n)
			{
				count = va_arg(add, int);
				total += count;
				i++;
			}
		}
	va_end(add);
	return (total);
}
