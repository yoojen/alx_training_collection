#include "main.h"
#include <stdlib.h>

/**
 * _realloc -> re-allocate new memory
 * @ptr: old version of memory
 * @old_size: old size
 * @new_size: new size to be allocated
 * Return: new pointer to allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newPtr, *copyPtr;
	unsigned int i, range;

	range = new_size - old_size;

	if (ptr)
	{
		copyPtr = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	newPtr = malloc(new_size);

	if (!newPtr)
		return (NULL);

	for (i = 0; i < range; i++)
	{
		*(newPtr + i) = copyPtr[i];
	}

	free(ptr);
	return (newPtr);
}
