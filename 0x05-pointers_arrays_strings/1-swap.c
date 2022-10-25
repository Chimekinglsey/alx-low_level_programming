#include "main.h"
/** swap_int - swaps the values of integer '*a' and '*b'
 * 
 *@a: takes the values of int and swaps
 * Return: nothing
 **/
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
} 
