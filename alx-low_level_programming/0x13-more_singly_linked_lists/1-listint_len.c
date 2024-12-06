#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* listint_len -> list items
* @h: head pointer
* Return: count
*/
size_t listint_len(const listint_t *h)
{
	unsigned int listLen = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		listLen++;
		h = h->next;
	}

	return (listLen);
}
