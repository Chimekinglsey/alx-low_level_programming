#include<stdio.h>
/**
 * main - prints Fizbuzz
 *
 * Return: Nothing nothing
 */

int main(void)
{
int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("Fizzbuzz ");
		}
			else if (i % 5 == 0)
			{
				printf("Buzz ");
			}
				else if (i % 3 == 0)
				{
					printf("Fizz ");
				}
				else
				{
					printf("%d ", i);
				}
	}
return (0);
}
