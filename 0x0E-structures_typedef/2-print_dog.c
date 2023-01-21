#include "dog.h"

/**
 * print_dog - a function that prints argument values
 * @d: struct to initialize
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->owner == NULL)
			d->owner = "(nil)";

	if (d->name == NULL)
			d->name = "(nil)";
printf("Name: %s\n Age: %f\n owner: %s\n", d->name, d->age, d->owner);
}
