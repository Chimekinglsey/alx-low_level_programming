#include <stdio.h>
/**
 * main - Produces numbers in base 16
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int A;

char B;

for (A = 0; A <= 9; A++)
{
	putchar('0' + A);
}
	for (B = 'a'; B <= 'f'; B++)
{
	putchar(B);
}

	putchar('\n');
return (0);
}
