#include "main.h"
/**
 *  * print_array - a function that concatenates two strings.
 *
 *   * @a: an input pointer string
 *
 *   *@n: the number to concat
 *
 *   * Return: nothing
 *
 **/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
	if (i < n - 1)
	{
		printf(", ");
	}
}

putchar('\n');

}
