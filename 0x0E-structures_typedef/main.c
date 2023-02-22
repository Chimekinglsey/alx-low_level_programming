#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Papalolo poppy";
    my_dog.age = 3.2f;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}
