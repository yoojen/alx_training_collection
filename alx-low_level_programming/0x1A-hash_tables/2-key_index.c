#include "hash_tables.h"

/**
 * key_index -> return index of key
 * @key: value that we are looking for
 * @size: size f the hash table
 * Return: position  of item
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int hashed = hash_djb2(key);
	unsigned int positionOfKey = hashed % size;

	return (positionOfKey);
}
