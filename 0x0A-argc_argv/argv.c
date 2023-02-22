#include <stdlib.h>
#include <stdio.h>
/*
* main - a program to test passing argument to main
* Return - integer
*/
int main(int argc, char *argv[])
{
int sum = 0, count;
if (argc > 1)
	{
	 printf("This program is called by argv[%d] which contains the     value argv[%s]\n", 0, argv[0]);

	for (count = 1; count < argc; count++)
		{
		printf("arg[%d] = %s\n", count, argv[count]);
		sum += atoi (argv[count]);
		}
		printf("argv[argc] = %s\n", argv[argc]);
		printf("Total = %d\n", sum);
}
else	{
		printf("Argument count is less than one\n");
		}
return (0);
}
