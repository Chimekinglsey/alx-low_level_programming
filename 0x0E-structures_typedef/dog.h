#ifndef _DOG_H
#define _DOG_H
struct dog
{
	char *name;
	float age;
	char *owner;
}
#include <stdlib.h>
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
