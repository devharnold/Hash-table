#include <stdio.h>
#include <stdlib.h>

#include <hash.h>

/**
 * create_table - function used to create the table
 * @size: the size of the array
 * Return: New table and if upon error, return NULL
 * 
 * 
*/
hash_table *create_table(unsigned long int size){
     hash_table *new_table;
     hash_node **array;

     if (size < 1){
        return (NULL);
     }
     new_table = malloc(sizeof(hash_table));
     if (!new_table){
        return NULL; /*This is if the memory allocation fails*/
     }

     array = calloc(new_table -> array, size);
     if (!new_table){
        return NULL;
     }

     new_table -> size = size;
     new_table -> array = array;

     return (new_table);
}
