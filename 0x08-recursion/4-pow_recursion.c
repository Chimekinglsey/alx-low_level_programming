
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
	return (x = x * _pow_recursion(x, y - 1));
	}
return (0);
}
