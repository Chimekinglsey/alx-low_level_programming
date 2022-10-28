
#include "main.h"
/**
 *  * _strcpy - a function that concatenates two strings.
 *
 *   * @dest: an input string
 *
 *   * @src: an input string
 *
 *   * Return: A pointer to the resulting string
 *
 **/
char *_strcpy(char *dest, char *src)
{
char *aux = dest;

while (*src)

*dest++ = *src++;

return (aux);
}
