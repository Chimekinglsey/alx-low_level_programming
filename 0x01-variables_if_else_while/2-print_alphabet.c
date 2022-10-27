#include <stdio.h>
/**
 * main - Produces lowercase alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char A;

for (A = 'a'; A <= 'z'; A++)
{
	putchar(A);
	putchar('\n');
}
return (0);
}
