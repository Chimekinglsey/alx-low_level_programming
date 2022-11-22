#include "main.h"

int prime(int checker, int num);
/**
 *  is_prime_number - Afunction that checks if a number is prime.
 *  @n: an input integer
 *  Return: 1 if n is prime or  0 if otherwise
 */

int is_prime_number(int n)

{

			if (n <= 1)

			return (0);
	return (prime(1, n));
}



/**
 * prime - check if num is divisible
 *  @num: the number to be checked
 *  @checker: the result of division
 *  Return: 1 if num is divisible or 0 if numis not divisible
 */

int prime(int checker, int num)

{
	if (num % checker != 0)
		return (0);
	if ((num % checker == 0) && num == checker)
	return (1);
return (prime(checker + 1, num));
}


