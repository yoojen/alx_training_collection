#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* get_nodeint_at_index -> return node at a certain index
* @head: head pointer
* @index: index of node
* Return: indexed node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);
	while (count < index)
	{
		if (head->next == NULL)
			return (NULL);
		++count;
		head = head->next;
	}
	return (head);
}
