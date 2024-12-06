#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get -> return a value associated with a key
 * @ht: hash table
 * @key: key to be used to get a certain value
 * Return: returns buffer of info
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	/*traverse throughout whole hash table elements*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		index++;
	}
	return (NULL);
}
