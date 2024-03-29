#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - structure for a basic dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description: data structure for dog
 */
typedef struct dog dog_t;
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stdlib.h>
#include <stdio.h>
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
