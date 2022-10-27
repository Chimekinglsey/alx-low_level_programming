#include <stdio.h>
/**
 * main - Prints lowercase except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char A;

for (A = 'a'; A <= 'z'; A++)
{
	if ((A != 'e') && (A != 'q'))
	putchar(A);
}

	putchar('\n');
return (0);
}
