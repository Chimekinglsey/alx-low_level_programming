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
int main(int argc, char *argv[])
{
int count, result = 0;

if (argc == 1)
	printf("0\n");

		if (argc > 2)
		{
			for (count = 3; count == argc; count++)
			{
				if (isdigit(atoi(argv[count])))
					{
					result += (atoi(argv[count]));
					return (result);
					}
				else
					{
					printf("Error\n");
					return (1);
					}
			}
		}
return (0);
}
