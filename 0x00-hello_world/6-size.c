#include <stdio.h>
/**
 * main - entry point
 * Description: print sizes of variable based on processor type
 * Return: always return 0
 **/
int main(void)
{
	char A;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %d\n", sizeof(A));
	printf("Size of an int: %d\n", sizeof(i));
	printf("Size of a long int: %d\n", sizeof(li));
	printf("Size of a long long int: %d\n", sizeof(lli));
	printf("Size of a float: %d\n", sizeof(f));
	return (0);
}
