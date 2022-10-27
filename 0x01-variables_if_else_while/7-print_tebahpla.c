#include <stdio.h>
/**
 * main - Produces reverse lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char A;

for (A = 'z'; A >= 'a'; A--)
{
	putchar(A);
}

	putchar('\n');
return (0);
}
