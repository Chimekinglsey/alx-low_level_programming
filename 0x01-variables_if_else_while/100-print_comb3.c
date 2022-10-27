#include <stdio.h>
/**
 * main - Prints combination of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int A;
int B;

for (A = 0; A < 100; A++)
{
	B = A;
	while ((A >= 99) && (A != B))
	putchar('0' + A + A);

	if ((A >= 0) && (A < 9))
	{
	putchar(',');

	putchar(' ');
	}
}

	putchar('\n');
return (0);
}
