#include <stdlib.h>
#include "lists.h"

/**
 * list_len -> return length
 * @h: struct
 * Return: len
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

