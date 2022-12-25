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
int count;
int *counter;

counter = &count;

counter = (int *) malloc (argc * (sizeof(int*)));
	for (count = 0; count <= argc; count++)
		{
		printf("%s\n", argv[*counter]);
		}
return (0);
}
