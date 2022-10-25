#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: Printing to standaard error
 * Return: always return 0;
 **/
int main(void)
{
	write(STDOUT_FILENO, "and that piece of
art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
