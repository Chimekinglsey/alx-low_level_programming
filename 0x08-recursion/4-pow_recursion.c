
#include "main.h"
/**
 *  *_pow_recursion - a function to evaluate x power y
 *
 * @x: input integer (root)
 * @y: input integer (pow)
 *
 *   * Return: exponential value
 *
 **/
int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else if (y == 1)
	{
	return (x);
	}
	else if (y > 1)
	{
	result = x * x;
	y--;
	return (result * _pow_recursion(x, y));
	}
return (0);
}
