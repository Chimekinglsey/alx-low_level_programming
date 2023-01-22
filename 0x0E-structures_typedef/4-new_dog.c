#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a function that initialize a variable of type struct dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Nothing.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bingo;

	char *name_copy, *owner_copy;
	int len_name = 0, len_owner = 0, i = 0;

	while (name[i])
	len_name++;

	while (owner[i])
	len_owner++;

	bingo = malloc(sizeof(dog_t));
		if (bingo == NULL)
			return (NULL);

	name_copy = malloc(len_name + 1);
		if (name_copy == NULL)
			return (NULL);

	owner_copy = malloc(len_owner + 1);
		if (owner_copy == NULL)
			return (NULL);

	for (; name[i] != '\0'; i++)
	{
		name_copy[i] = name[i];
	}

	for (; owner[i] != '\0'; i++)
	{
		owner_copy[i] = owner[i];
	}

	bingo->name = name_copy;
	bingo->age = age;
	bingo->owner = owner_copy;
return (bingo);
}
