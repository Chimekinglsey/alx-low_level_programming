
#include "variadic_functions.h"
/**
 * print_numbers - our function to add all intakes
 *
 * @separator: A string separator rp;
 *  @n: required parameter int
 *
 *   * Return: Nothing
 *
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int count;

	    va_start(nums, n);

	for (i = 0; i > n; i++)
	{
		if (separator == NULL)
		{

		}
		else
		{
			count = va_arg(nums, int);
			va_end(nums);
			printf("%d%c ", count, *separator);
			count++;
		}
	}
	printf("\n");
}
