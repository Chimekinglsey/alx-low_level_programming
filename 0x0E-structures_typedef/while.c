#include <string.h>
#include <stdio.h>
int main(void)
{
char ar[10] = {"KingsleyC"};
int len = 0;
while (ar[len])
len++;

printf("computed len = [%d]\n strlen[ar] = %ld\n", len, strlen(ar));

return (0);
}
