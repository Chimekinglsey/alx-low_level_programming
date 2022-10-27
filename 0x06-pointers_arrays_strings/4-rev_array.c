#include "main.h"
/**
 *  * reverse_array - a function that concatenates two strings.
 *
 *   * @a: an input string
 *
 *   *@n: the number to concat
 *
 *   * Return: nothing
 *
 **/
void reverse_array(int *a, int n)
{
	int i = 0;

	int aux;

	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}
