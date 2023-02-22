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
/* int sum = 0; */
int count;

	for (count = 0; count < argc; count++)
		{
		printf("%s\n", argv[count]);
		/*sum += atoi (argv[count]);*/
		}
return (0);
}
