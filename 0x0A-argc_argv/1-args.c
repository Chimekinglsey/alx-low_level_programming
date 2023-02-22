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
(void) argv;
printf("%d\n", (argc - 1));
return (0);
}
