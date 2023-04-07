#include <stdio.h>
#include <stdlib.h>

/* We are implementing a hash table */

#define CAPACITY 50000 /* size of the HashTable*/

unsigned long hash_function(char *str)
{
	unsigned long i = 0; int j;

	for (j = 0; str[j]; j++)
		i = i + str[j];

	return (i % CAPACITY);
}
// Defines the HashTable item.

typedef struct Ht_item
{
    char* key;
    char* value;
} Ht_item;

// Defines the HashTable.
typedef struct HashTable
{
    // Contains an array of pointers to items.
    Ht_item** items;
    int size;
    int count;
} HashTable;

Ht_item* create_item(char* key, char* value)
{
    // Creates a pointer to a new HashTable item.
    Ht_item* item = (Ht_item*) malloc(sizeof(Ht_item));
    item->key = (char*) malloc(strlen(key) + 1);
    item->value = (char*) malloc(strlen(value) + 1);
    strcpy(item->key, key);
    strcpy(item->value, value);
    return item;
}

HashTable* create_table(int size)
{
    // Creates a new HashTable.
    HashTable* table = (HashTable*) malloc(sizeof(HashTable));
    table->size = size;
    table->count = 0;
    table->items = (Ht_item**) calloc(table->size, sizeof(Ht_item*));

    for (int i = 0; i < table->size; i++)
        table->items[i] = NULL;

    return table;
}

void free_item(Ht_item* item)
{
    // Frees an item.
    free(item->key);
    free(item->value);
    free(item);
}

void free_table(HashTable* table)
{
    // Frees the table.
    for (int i = 0; i < table->size; i++)
    {
        Ht_item* item = table->items[i];

        if (item != NULL)
            free_item(item);
    }

    free(table->items);
    free(table);
}

void print_table(HashTable* table)
{
    printf("\nHash Table\n-------------------\n");

    for (int i = 0; i < table->size; i++)
    {
        if (table->items[i])
        {
            printf("Index:%d, Key:%s, Value:%s\n", i, table->items[i] -> key, table->items[i]->value);
        }
    }

    printf("-------------------\n\n");
}



int main(void)
{
	char names[] = "This is the man who is a bigger baby";
	char name_1[] = {" I don't like it when people don't take responsibility for their duty"};
	char babablue[50] = {"It's getting interesting"};
	
	hash_function(name_1);
	hash_function(babablue);
	hash_function(names);

return (0);
}
