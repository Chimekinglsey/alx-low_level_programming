#include "main.h"
/**
 *  * print_to_98 - main prints lowercase
 *
 * @n: intake value
 *   * Return: A pointer to the resulting string
 *
 **/
void print_to_98(int n)
{
if (n <= 98)
{
for (; n <= 98; n++)
	{
	printf("%d", n);
	if (n == 98)
	{
		continue;
	}
	printf(", ");
	}
	printf("\n");
}
	else
{
	for (; n >= 98; n--)
	{
		printf("%d", n);
		if (n == 98)
		continue;
		printf(", ");
	}
	printf("\n");
}
}
