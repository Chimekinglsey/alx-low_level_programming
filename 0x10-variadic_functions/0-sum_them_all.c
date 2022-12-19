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
va_list ap;
  int i, sum;

  va_start (ap, n);         /* Initialize the argument list. */

  sum = 0;

  for (i = 0; i < n; i++)
    sum += va_arg (ap, int);    /* Get the next argument value. */

  va_end (ap);                  /* Clean up. */
  return sum;
}
