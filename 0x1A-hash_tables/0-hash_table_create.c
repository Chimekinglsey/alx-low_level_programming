#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*	hash_table_create - function that creates a hash_table
*	@size: size of hash_table to create
*	Return: Created table if successful else, NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable; int i;

	newtable = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (newtable == NULL)
		return (NULL);
	newtable->size = size;
	newtable->array = malloc(size * sizeof(hash_node_t));
	if (!newtable->array)
		free(newtable->array);

	for(i = 0; i < size; i++)
		newtable->array[i] = NULL;
	
	return (newtable);
}
