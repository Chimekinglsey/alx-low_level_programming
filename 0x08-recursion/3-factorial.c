#include "main.h"
/*
 * factorial - a function that returns the factorial of a number.
 * @n: value to evaluate
 *
 * Return: Factorial
 */
int factorial(int n)
{
	int result;

	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 1) || (n == 0))
	{
		return (1);
	}
	else
	{
	result = n * factorial(n - 1);
	return (result);
	}
return (0);
}
