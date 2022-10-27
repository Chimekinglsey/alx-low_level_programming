#include <stdio.h>
/**
 * main - Prints combination of numbers and space comma
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int A;

for (A = 0; A < 10; A++)
{
	putchar('0' + A);

	if ((A >= 0) && (A <= 9))
	{
	char B = ',';

	putchar(B);

	putchar(' ');
	}
}

	putchar('\n');
return (0);
}
