#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dlistint_len -> return len
 * @h: head poinyer
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *ptr;

	if (h)
	{
		ptr = h;
		while (ptr != NULL)
		{
			ptr = ptr->next;
			len++;
		}
	}
	return (len);
}

