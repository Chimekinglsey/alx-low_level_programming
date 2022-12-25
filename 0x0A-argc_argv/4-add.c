#include "main.h"

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
int main(int argc, char **argv)
{
	int num, result = 0, i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
	}
