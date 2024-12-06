#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
* hash_table_print -> print hash table
* @ht: hash table to be printed
* Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0;
	short int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			if (first)
			{
				printf("\'%s\': \'%s\'", node->key, node->value);
				first = 0;
			}
			else
				printf(", \'%s\': \'%s\'", node->key, node->value);
			node = node->next;
		}
		index++;
	}
	printf("}\n");
}
