#include <stdio.h>
/**
 * main - Produces lowercase and UPPERCASE
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char A;

for (A = 'a'; A <= 'z'; A++)
{
	putchar(A);
}

for (A = 'A'; A <= 'Z'; A++)
{
	putchar(A);
}
	putchar('\n');
return (0);
}
