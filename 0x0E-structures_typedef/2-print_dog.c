#include "dog.h"

/**
 * print_dog - a function that prints argument values
 * @d: struct to initialize
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if ((d->owner == NULL) || (d->age == NULL))
		printf("(nil)");

	if (d->name == NULL)
		printf("Name: (nil)");

	if (d == NULL)
		printf();

	d->name = name;
	d->age = age;
	d->owner = owner;

}
