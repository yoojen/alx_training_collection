#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dlistint -> print list
 * @h: head pointer
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *ptr;

	if (h)
	{
		ptr = h;
		while (ptr != NULL)
		{
			len++;
			printf("%d\n", ptr->n);
			ptr = ptr->next;
		}
	}
	return (len);
}
