#include<stdio.h>
/**
 * main - prints Fizbuzz
 *
 * Return: Nothing nothing
 */

int main(void)
{
int i;
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");

		if (i % 5 == 0)
			printf("Buzz ");

		if (i % 15 == 0)
			printf("Fizzbuzz ");

		else
			printf("%d ", i);
	}
return (0);
}