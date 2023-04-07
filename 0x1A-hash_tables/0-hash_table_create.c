#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
*	hash_table_create - function that creates a hash_table
*	@size: size of hash_table to create
*	Return - the created table if successful else, NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	newtable = (hash_table_t*)malloc(sizeof(hash_table_t));
	
	if (newtable == NULL)
		return (NULL);
	newtable->size = size;
	
	return (newtable);
}
