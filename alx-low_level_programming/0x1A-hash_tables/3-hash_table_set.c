#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_set -> insert an item in the hash table
 * @ht: hash table to be updated
 * @key: key of item
 * @value: value that is associated with the key
 * Return: 1 on success 0 when failes
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/*declare two nodes with null value*/
	hash_node_t *node, *newNode;
	unsigned long int index;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	/* assigning node at the index generated from indexing function*/
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	if (node == NULL)
	{
		newNode = create_node(key, value);
		if (newNode == NULL)
			return (0);
		ht->array[index] = newNode;
		return (1);
	}
	/*if there is collision || replace value*/
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	/*if no key exist and there is no collision, create new node*/
	newNode = create_node(key, value);
	if (newNode == NULL)
		return (0);
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}

/**
* create_node -> creates new node
* @key: key
* @value: value
* Return: new node
*/

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newNode = malloc(sizeof(hash_node_t));

	if (newNode == NULL)
		return (NULL);
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	return (newNode);
}
