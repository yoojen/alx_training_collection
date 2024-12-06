#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create -> create empty hash table
 * @size: sze of hash table
 * Return: empty hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;
	unsigned int i = 0;

	head = malloc(sizeof(hash_table_t));
	if (head == NULL)
		return (NULL);
	head->size = size;
	head->array = malloc(sizeof(hash_node_t) * size);
	if (head->array == NULL)
	{
		free(head);
		return (NULL);
	}
	while (i < size)
	{
		head->array[i] = NULL;
		i++;
	}

	return (head);
}
