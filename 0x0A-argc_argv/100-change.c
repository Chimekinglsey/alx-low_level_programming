#include <stdlib.h>
#include <stdio.h>
/**
* main - This is a function that prints its name even after a rename.
*
*@argc: argument count variable
*
*@argv: argument vector string
*
* Return: always zero at success
*
*/
int main(int argc, char *argv[])
{
int amount, change = 0;
amount = atoi(argv[1]);

if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}
if (amount < 0)
	printf("%d\n", 0);

	else
	{
		if (amount % 25 >= 0)
		{
			change += amount / 25;
			amount = amount % 25;
		}
		if (amount % 10 >= 0)
		{
			change += amount / 10;
			amount = amount % 10;
		}
		if (amount % 5 >= 0)
		{
			change += amount / 5;
			amount = amount % 5;
		}
		if (amount % 2 >= 0)
		{
			change += amount / 2;
			amount = amount % 2;
		}
		if (amount % 1 >= 0)
		{
			change += amount / 1;
			amount = amount % 1;
		}
	printf("%d\n", change);
	}
return (0);
}
