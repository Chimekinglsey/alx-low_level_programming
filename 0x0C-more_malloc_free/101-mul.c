#include "main.h"
#include <ctype.h>
/**
* main - a function to multiply two numbers
* @argc: argument counter
* @num1: first int
* @num2: second number
* Return - product of two number
*/
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else if (isdigit(num1) == 0 && isdigit(num2) == 0)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
return (0);
}
