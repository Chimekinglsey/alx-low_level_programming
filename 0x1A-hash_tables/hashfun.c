#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CAPACITY 50000 /* Size of the HashTable.*/

unsigned long hash_function(char* str)
{
    unsigned long i = 0; int j = 0;
	unsigned long b;
	while(str[j])
	{
		i = i + str[j];
		j++;
	}
	b = i % CAPACITY;
	printf("%ld\n", b);
    return (b);
}

int main(void)
{
	char bk1[] = "The :old man and the sea";
	char book2[] = "Legend of ?the Seeker Recounted";
	char book3[4] = {'C', 'a', 'u', '\0'};
	char book4[4] = {'H', 'e', 'l', '\0'};
	char book5[6] = {'H', 'E', 'L', 'L', 'O', '\0'};
	char book6[5] = {'g', 'E', 'L','y', '\0'};

/**
*	printf("0 + a = %d\n", a+'a');
*	int a = 0;
*	printf("0 + a = %d, 1 + a = %d\n", a+'a', 1+'a');
*/
	hash_function(bk1);
	hash_function(book2);
	hash_function(book3);
	hash_function(book4);
	hash_function(book5);
	hash_function(book6);

	return (0);
}
